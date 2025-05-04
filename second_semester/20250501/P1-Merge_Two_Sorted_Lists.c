#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

Node* createNode(int val) {
    Node* new_data = (Node*)malloc(sizeof(Node));
    new_data->val = val;
    new_data->next = NULL;
    return new_data;
}

void push(Node** head, int val) {
    Node* new_data = createNode(val);
    if (*head == NULL) {
        *head = new_data;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_data;
}

Node* mergeLists(Node* l1, Node* l2) {
    Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;

    while (l1 && l2) {
        if (l1->val < l2->val) {
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
        printf("%d ", head->val);
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

        while (scanf("%d", &x) == 1) {
            push(&list1, x);
            if (getchar() == '\n') 
                break;
        }

        while (scanf("%d", &x) == 1) {
            push(&list2, x);
            if (getchar() == '\n') 
                break;
        }

        Node* merged = mergeLists(list1, list2);
        printList(merged);

    }

    return 0;
}
