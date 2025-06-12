#include <stdio.h>
#include <stdlib.h>

int *stack;
int size = 0;
int top = 0;

void createStack(int stackSize) {
    stack = (int *)malloc(stackSize * sizeof(int));
    size = stackSize;
    printf("OK\n");
}

void push(int data) {
    if (top >= size) {
        printf("Stack full\n");
    } else {
        stack[++top] = data;
        printf("OK\n");
    }
} 

void pop() {
    if (top == 0) {
        printf("Stack empty\n");
    } else {
        printf("%c\n", stack[top--]);
    }
}

void quit() {
    printf("quit\n");
    exit(0);
}

int main() {
    
    int option, stackSize;
    char data;

    while(1) {
        scanf("%d", &option);

        switch(option) {
            case 1:
                scanf("%d", &stackSize);
                createStack(stackSize);
                break;
            case 2:
                scanf(" %c", &data);
                push(data);
                break;
            case 3:
                pop();
                break;
            case 0:
                quit();
                break;
            default:
                break;
        }
    }
}
