#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *size;
    int top;
    int input;
} Stack;

Stack* create(int size) {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->size = (char *)malloc(sizeof(char) * size);
    s->top = -1;
    s->input = size;
    return s;
}

int isFull(Stack *s) {
    return s->top == s->input - 1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, char value) {
    if (isFull(s)) {
        printf("Stack full\n");
    } else {
        s->size[++(s->top)] = value;
        printf("OK\n");
    }
}

void pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack empty\n");
    } else {
        printf("%c\n", s->size[(s->top)--]);
    }
}

int main() {
    Stack *s = NULL;
    int i;
    while (1) {
        if (scanf("%d", &i) != 1) 
            break;

        switch(i) {
            case 1:
                int size;
                scanf("%d", &size);
                s = create(size);
                printf("OK\n");
                break;
            case 2:
                char c;
                scanf(" %c", &c);
                push(s, c);
                break;
            case 3:
                pop(s);
                break;
            case 0:
                printf("quit\n");
                exit(0);
            default:
                break;
        }
    }
    return 0;
}