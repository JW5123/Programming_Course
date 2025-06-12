#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void insertNode(Node** head, Node** tail, int data) {
    Node* node = createNode(data);
    if(*head == NULL) {
        *head = *tail = node;
    } else {
        (*tail)->next = node;
        *tail = node;
    }
}

void printReverse(Node* head) {
    if(head == NULL) {
        return;
    }
    if(head->next != NULL) { 
        printReverse(head->next);
        printf("->");
    }
    printf("%d", head->data);
}

int main() {
    int n;
    scanf("%d", &n);

    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 1; i <= n; i++) {
        insertNode(&head, &tail, i);
    }

    printReverse(head);
    printf("\n");

    return 0;
}

/*
Node* reverseList(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
*/