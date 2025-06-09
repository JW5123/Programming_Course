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

Node* mergeLists(Node* l1, Node* l2) {
    Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;

    while (l1 && l2) {
        if (l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    tail->next = (l1 != NULL) ? l1 : l2;
    return dummy.next;
}

void printList(Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    
    while (n--) {
        int x;
        Node* list1 = NULL;
        Node* list2 = NULL;
        Node* tail = NULL;

        while (scanf("%d", &x) == 1) {
            insertNode(&list1, &tail, x);
            if (getchar() == '\n') 
                break;
        }

        while (scanf("%d", &x) == 1) {
            insertNode(&list2, &tail, x);
            if (getchar() == '\n') 
                break;
        }

        Node* merged = mergeLists(list1, list2);
        printList(merged);

    }

    return 0;
}
