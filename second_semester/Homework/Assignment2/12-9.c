#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListNode {
    char data;
    struct ListNode *next;
} ListNode;

ListNode *createNode(char data) {
    ListNode *node = (ListNode*)malloc(sizeof(ListNode));
    node->data = data;
    node->next = NULL;
    return node;
}

void insertNode(ListNode **head, char data) {
    ListNode *node = createNode(data);

    if(*head == NULL) {
        *head = node;
    } else {
        ListNode *curr = *head;
        while(curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = node;
    }
}

void preNode(ListNode **head, char data) {
    ListNode *node = createNode(data);
    node->next = *head;
    *head = node;
}

ListNode *reverse(ListNode *head) {
    ListNode *reverseList = NULL;
    ListNode *curr = head;
    while(curr != NULL) {
        preNode(&reverseList, curr->data);
        curr = curr->next;
    }
    return reverseList;
}

void printList(ListNode *head) {
    ListNode *curr = head;
    while(curr != NULL) {
        if(curr->next != NULL) {
            printf("%c->", curr->data);
        } else {
            printf("%c", curr->data);
        }
        curr = curr->next;
    }
    printf("\n");
}


int main() {
    ListNode *head = NULL;
    char ch[11]; 

    scanf("%10s", ch);

    for (int i = 0; i < 10; i++) {
        insertNode(&head, ch[i]);
    }

    printf("原始串列： ");
    printList(head);

    ListNode *reversList = reverse(head);

    printf("反轉串列： ");
    printList(reversList);
    printf("\n");

    return 0;
}