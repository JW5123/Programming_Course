#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char data;
    struct node* next;
    struct node* prev;
} Node;

Node* createNode(char data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void insertNode(Node** head, Node** tail, char data) {
    Node* node = createNode(data);
    if(*head == NULL) {
        *head = *tail = node;
    } else {
        node->prev = *tail;
        (*tail)->next = node;
        *tail = node;
    }
}

int isPalindrome(Node *head) {
    Node *left = head;
    Node *right = head;
    while(right->next != NULL) {
        right = right->next;
    }
    while(left != right) {
        if(left->data != right->data) {
            return 0;
        }
        left = left->next;
        right = right->prev;
    }
    return 1;
}

int main() {

    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        char str[100];
        scanf("%s", str);
        
        Node* head = NULL;
        Node* tail = NULL;

        for(int j = 0; j < strlen(str); j++) {
            insertNode(&head, &tail, str[j]);
        }

        if(isPalindrome(head)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}