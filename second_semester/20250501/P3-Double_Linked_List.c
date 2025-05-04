#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char data;
    struct node* next;
    struct node* prev;
} Node;

Node* createList(char* str) {
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < strlen(str); i++) {
        Node* new_node = (Node*)malloc(sizeof(Node));
        new_node->data = str[i];
        new_node->prev = tail;
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
        } else {
            tail->next = new_node;
        }
        tail = new_node;
    }
    return head;
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
        Node *head = createList(str);
        if(isPalindrome(head)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}