#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

void insertNode(Node** head, Node** tail, Node* node) {
    if (*head == NULL) {
        *head = *tail = node;
    } else {
        (*tail)->next = node;
        node->prev = *tail;
        *tail = node;
    }
}

void removeNode(Node** head, Node** tail, Node* node) {
    if (node->prev)
        node->prev->next = node->next;
    else
        *head = node->next;

    if (node->next)
        node->next->prev = node->prev;
    else
        *tail = node->prev;
}
void sprint(Node** head, Node** tail, Node* node) {
    if (node->prev == NULL) {
        return;
    }

    Node* prev = node->prev;
    Node* next = node->next;

    if (prev->prev) {
        prev->prev->next = node;
    } else {
        *head = node;
    }

    if (next) {
        next->prev = prev;
    } else {
        *tail = prev;
    }

    node->prev = prev->prev;
    node->next = prev;

    prev->prev = node;
    prev->next = next;
}

int main() {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    Node* head = NULL;
    Node* tail = NULL;

    Node** players = (Node**)malloc((N + 1) * sizeof(Node*));

    for (int i = 1; i <= N; i++) {
        players[i] = createNode(i);
        insertNode(&head, &tail, players[i]);
    }

    for (int i = 0; i < M; i++) {
        int T, X;
        scanf("%d %d", &T, &X);
        if (T == 0) {
            removeNode(&head, &tail, players[X]);
        } else if (T == 1) {
            sprint(&head, &tail, players[X]);
        }
    }

    Node* curr = head;
    while (curr) {
        printf("%d", curr->data);
        if (curr->next) {
            printf(" ");
        }
        curr = curr->next;
    }
    printf("\n");

    return 0;
}
