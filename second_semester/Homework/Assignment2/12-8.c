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

void sumAndavg(Node *head, int *sum, double *avg) {
    int count = 0;
    *sum = 0;
    while(head != NULL) {
        *sum += head->data;
        count++;
        head = head ->next;
    }
    *avg = (double)*sum / count;
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
}

int main() {

    Node *head = NULL;
    int sum;
    double avg;

    srand((unsigned int)time(NULL));

    for(int i = 0; i < 25; i++) {
        int num = rand() % 101;
        insertNode(&head, num);
    }

    printf("有序串列: ");
    printList(head);

    sumAndavg(head, &sum, &avg);
    printf("\n總和: %d\n平均: %.2f\n", sum, avg);
    
    return 0;
}