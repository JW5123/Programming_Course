#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

    if(*head == NULL) {
        *head = node;
    } else {
        Node *curr = *head;
        while(curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = node;
    }
}

void concatenate(Node **List1, Node *List2) {
    if(*List1 == NULL) {
        *List1 = List2;
    } else {
        Node *curr = *List1;
        while(curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = List2;
    }
}

void printList(Node *head) {
    while(head != NULL) {
        printf("%c ", head->data);
        head = head->next;
    }
}

void buildList(Node **head, char *list) {
    for(int i = 0; list[i] != '\0'; i++) {
        if(!isspace(list[i])) {
            insertNode(head, list[i]);
        }
    }
}

int main() {

    Node *list1 = NULL, *list2 = NULL;
    char arr[100];

    printf("輸入字元串列1: ");
    fgets(arr, sizeof(arr), stdin);
    buildList(&list1, arr);

    printf("輸入字元串列2: ");
    fgets(arr, sizeof(arr), stdin);
    buildList(&list2, arr);

    printf("字元串列1: ");
    printList(list1);

    printf("\n字元串列2: ");
    printList(list2);

    concatenate(&list1, list2);
    printf("\n");
    printList(list1);

    return 0;
}