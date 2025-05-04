#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

void push(Node **head, int new_data) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
    } else {
        Node* curr = *head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = new_node;
    }
}

Node* removeDuplicates(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        Node* next = curr->next;
        while (next != NULL) {
            if (curr->data == next->data) {
                Node* temp = next;
                next = next->next;
                free(temp);
                curr->next = next;
            } else {
                next = next->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {

    Node *head = NULL;

    int n;
    while(1) {
        scanf("%d", &n);
        if(getchar() == '\n') 
            break;
        push(&head, n);
    }

    head = removeDuplicates(head);
    printList(head);

    return 0;
}


/*



*/