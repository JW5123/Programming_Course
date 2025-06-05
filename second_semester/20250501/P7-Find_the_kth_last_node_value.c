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
    if(*head == NULL) {
        *head = *tail = node;
    } else {
        (*tail)->next = node;
        *tail = node;
    }
}

int findKthFromEnd(Node* head, int k) {
    Node* fast = head;
    Node* slow = head;

    for (int i = 0; i < k; ++i) {
        if (fast == NULL) 
            return -1;
        fast = fast->next;
    }

    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    return slow->data;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 1; i <= n; ++i) {
        insertNode(&head, &tail, i);
    }

    int result = findKthFromEnd(head, k);
    printf("%d\n", result);

    return 0;
}
