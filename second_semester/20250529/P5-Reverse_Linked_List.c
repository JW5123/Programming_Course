#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

Node *createNode(int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void insertNode(Node** head, int data) {
    Node *node = createNode(data);

    if(*head == NULL) {
        *head = node;
    } else {
        Node *temp  = NULL;
        while(temp->next != NULL) {
            temp = temp->next;  
        }
        temp->next = node;
    }
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
            insertNode(&head, num);
            if (getchar() == '\n') {
                break;
            }
        }

        printList(head);
        reverse(&head);
    }

    return 0;
}