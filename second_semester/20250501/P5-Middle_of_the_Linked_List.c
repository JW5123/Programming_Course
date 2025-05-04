#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* new_data = (Node*)malloc(sizeof(Node));
    new_data->data = data;
    new_data->next = NULL;
    return new_data;
}

int findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        Node* head = NULL;
        Node* tail = NULL;
        int x;

        while (scanf("%d", &x) == 1) {
            Node* new_data = createNode(x);
            if (!head) {
                head = tail = new_data;
            } else {
                tail->next = new_data;
                tail = new_data;
            }
            if(getchar() == '\n') 
                break;
        }

        printf("%d\n", findMiddle(head));
    }

    return 0;
}