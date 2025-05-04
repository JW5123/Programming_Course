#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* new_data = (Node*)malloc(sizeof(Node));
    new_data->data = data;
    new_data->next = NULL;
    return new_data;
}

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL) {
            printf("->");
        }
        head = head->next;
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 1; i <= n; ++i) {
        Node* new_data = createNode(i);
        if (head == NULL) {
            head = tail = new_data;
        } else {
            tail->next = new_data;
            tail = new_data;
        }
    }

    head = reverseList(head);
    printList(head);

    return 0;
}