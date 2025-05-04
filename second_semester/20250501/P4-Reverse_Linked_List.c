#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

void push(Node** head, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}

void reverse(Node** head) {
    Node* curr = *head;
    Node* prev = NULL;
    Node* next = NULL;
    
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

void printList(Node* node) {
    while (node != NULL) {
        if(node->next == NULL)
            printf("%d\n", node->data);
        else
            printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        Node* head = NULL;
        int num;
        while (scanf("%d", &num) == 1) {
            push(&head, num);
            if (getchar() == '\n') 
                break;
        }

        printList(head);
        reverse(&head);
    }

    return 0;
}