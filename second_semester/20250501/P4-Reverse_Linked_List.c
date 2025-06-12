#include <stdio.h>
#include <stdlib.h>

typedef struct head {
    int data;
    struct head* next;
} Node;

Node* createNode(int data) {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = data;
    head->next = NULL;
    return head;
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

void reverse(Node** head) {
    Node* curr = *head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

void printList(Node* head) {
    while (head != NULL) {
        if(head->next == NULL)
            printf("%d\n", head->data);
        else
            printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        Node* head = NULL;
        Node* tail = NULL;

        int num;
        while (scanf("%d", &num) == 1) {
            insertNode(&head, &tail, num);
            if (getchar() == '\n') 
                break;
        }

        reverse(&head);
        printList(head);
    }

    return 0;
}