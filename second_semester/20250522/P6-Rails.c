#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

typedef struct {
    int data[MAX];
    int top;
} Stack;

void initStack(Stack* s) {
    s->top = -1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, int value) {
    s->data[++(s->top)] = value;
}

int pop(Stack* s) {
    return s->data[(s->top)--];
}

int peek(Stack* s) {
    return s->data[s->top];
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if(n == 0) {
            break;
        }
        while (1) {
            int target[MAX];
            scanf("%d", &target[0]);
            if (target[0] == 0) {
                printf("\n");
                break;
            }

            for (int i = 1; i < n; i++)
                scanf("%d", &target[i]);

            Stack s;
            initStack(&s);
            int train = 1, index = 0;

            while (train <= n) {
                push(&s, train);

                while (!isEmpty(&s) && peek(&s) == target[index]) {
                    pop(&s);
                    index++;
                }
                train++;
            }

            if (isEmpty(&s))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
