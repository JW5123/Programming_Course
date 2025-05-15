#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100

typedef struct {
    char data[MAX];
    int top;
} Stack;

void createStack(Stack *s) {
    s->top = -1;
}

bool isEmptyStack(Stack *s) {
    return s->top == -1;
}

bool isFullStack(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, char val) {
    if (!isFullStack(s)) {
        s->data[++s->top] = val;
    }
}

char pop(Stack *s) {
    if (!isEmptyStack(s)) {
        return s->data[s->top--];
    }
    return '\0';
}

char peek(Stack *s) {
    if (!isEmptyStack(s)) {
        return s->data[s->top];
    }
    return '\0';
}

typedef struct {
    Stack s1, s2;
    int input;
    int size;
} Queue;

void createQueue(Queue *q, int data) {
    createStack(&q->s1);
    createStack(&q->s2);
    q->input = data;
    q->size = 0;
    printf("OK\n");
}

bool isEmptyQueue(Queue *q) {
    return q->size == 0;
}

bool isFullQueue(Queue *q) {
    return q->size == q->input;
}

void enqueue(Queue *q, char val) {
    if (isFullQueue(q)) {
        printf("Queue full\n");
        return;
    }
    push(&q->s1, val);
    q->size++;
    printf("OK\n");
}

void dequeue(Queue *q) {
    if (isEmptyQueue(q)) {
        printf("Queue empty\n");
        return;
    }
    if (isEmptyStack(&q->s2)) {
        while (!isEmptyStack(&q->s1)) {
            push(&q->s2, pop(&q->s1));
        }
    }
    char val = pop(&q->s2);
    q->size--;
    printf("%c\n", val);
}

void empty(Queue *q) {
    printf("%s\n", isEmptyQueue(q) ? "True" : "False");
}

int main() {
    Queue q;
    int i, size;
    char val;
    while (1) {
        scanf("%d", &i);
        switch (i) {
            case 1:
                scanf("%d", &size);
                createQueue(&q, size);
                break;
            case 2:
                scanf(" %c", &val);
                enqueue(&q, val);
                break;
            case 3:
                dequeue(&q);
                break;
            case 4:
                empty(&q);
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
