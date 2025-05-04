#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node* createNode(int data) {
    Node* new_data = (Node*)malloc(sizeof(Node));
    new_data->data = data;
    new_data->next = NULL;
    return new_data;
}

int binTodec(Node* head) {
    int res = 0;
    while (head != NULL) {
        res = (res << 1) | head->data;
        head = head->next;
    }
    return res;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        Node* head = NULL;
        Node* tail = NULL;
        int x;

        while (scanf("%d", &x) == 1) {
            Node* new_data = createNode(x);
            if (head == NULL) {
                head = tail = new_data;
            } else {
                tail->next = new_data;
                tail = new_data;
            }

            if (getchar() == '\n') 
                break;
        }

        int res = binTodec(head);
        printf("%d\n", res);
    }

    return 0;
}
