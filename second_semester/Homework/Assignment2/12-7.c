#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void insertNode(Node **head, int data) {
    Node *node = createNode(data);

    if(*head == NULL || data < (*head)->data) {
        node->next = *head;
        *head = node;
    } else {
        Node *curr = *head;
        while(curr->next != NULL && curr->next->data < data) {
            curr = curr->next;
        }
        node->next = curr->next;
        curr->next = node;
    }
}

Node *merge(Node *List1, Node *List2) {
    Node dummy;
    Node *tail = &dummy;
    dummy.next = NULL;

    while(List1 != NULL && List2 != NULL) {
        if(List1->data < List2->data) {
            tail->next = List1;
            List1 = List1->next;
        } else {
            tail->next = List2;
            List2 = List2->next;
        }
        tail = tail->next;
    }

    tail->next = (List1 != NULL) ? List1 : List2;

    return dummy.next;
}

void printList(Node *head) {
    while(head != NULL) {
        if(head->next != NULL) {
            printf("%d, ", head->data);
        } else {
            printf("%d", head->data);
        }
        head = head->next;
    }
    printf("\n");
}

void randomList(Node **head, int n) {
    for(int i = 0; i < n; i++) {
        int data = rand() % 101;
        insertNode(head, data);
    }
}

int main() {

    Node *List1 = NULL;
    Node *List2 = NULL;

    srand((unsigned int)time(NULL));

    randomList(&List1, 10);
    randomList(&List2, 10);

    printf("串列1: ");
    printList(List1);
    printf("串列2: ");
    printList(List2);

    Node *mergedList = merge(List1, List2);

    printf("合併後串列: ");
    printList(mergedList);
    

    return 0;
}