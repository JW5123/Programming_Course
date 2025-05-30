#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *createNode(int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void insertNode(Node **head, int data) {
    Node *node = createNode(data);
    if (*head == NULL) {
        *head = node;
    } else {
        Node *curr = *head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = node;
    }
}

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void removeDuplicate(Node* head) {
    int values[10001];
    int count = 0;

    while (head) {
        values[count++] = head->data;
        head = head->next;
    }

    qsort(values, count, sizeof(int), cmp);

    printf("%d", values[0]);
    for (int i = 1; i < count; i++) {
        if (values[i] != values[i - 1]) {
            printf(" %d", values[i]);
        }
    }
    printf("\n");
}

int main() {
    Node *head = NULL;
    int n;

    while (scanf("%d", &n) == 1) {
        insertNode(&head, n);
        if (getchar() == '\n') {
            break;
        }
    }

    removeDuplicate(head);
    return 0;
}
