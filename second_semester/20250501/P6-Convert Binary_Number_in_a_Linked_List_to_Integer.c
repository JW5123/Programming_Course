#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
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

int binTodec(Node* head) {
    int res = 0;
    while (head != NULL) {
        res = res * 2 + head->data;
        head = head->next;
    }
    return res;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        Node* head = NULL;
        Node* tail = NULL;
        int x;

        while (scanf("%d", &x) == 1) {
            insertNode(&head, &tail, x);
            if (getchar() == '\n') 
                break;
        }

        int res = binTodec(head);
        printf("%d\n", res);
    }

    return 0;
}
