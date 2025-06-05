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
    if (*head == NULL) {
        *head = *tail = node;
    } else {
        (*tail)->next = node;
        *tail = node;
    }
}

int findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main() {

    int t;
    scanf("%d", &t);
    while (t--) {
        Node* head = NULL;
        Node* tail = NULL;
        int x;

        while (scanf("%d", &x) == 1) {
            insertNode(&head, &tail, x);
            if(getchar() == '\n') 
                break;
        }

        printf("%d\n", findMiddle(head));
    }

    return 0;
}