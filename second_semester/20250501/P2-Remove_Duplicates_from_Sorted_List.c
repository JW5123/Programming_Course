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

void insertNode(Node **head, Node **tail, int data) {
    Node* node = createNode(data);
    if (*head == NULL) {
        *head = *tail = node;
    } else {
        (*tail)->next = node;
        *tail = node;
    }
}

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void removeDuplicates(Node *head) {
    int data[10001];
    int count = 0;

    while(head) {
        data[count++] = head->data; // traversal linkedlist and copy to array
        head = head->next;
    }

    qsort(data, count, sizeof(int), cmp);

    for(int i = 0; i < count; i++) {
        if(data[i] != data[i - 1]) {
            printf("%d ", data[i]);
        }
    }
    printf("\n");
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    while(scanf("%d", &n) == 1) {
        insertNode(&head, &tail, n);
        if(getchar() == '\n') 
            break;
    }

    removeDuplicates(head);

    return 0;
}