#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100

typedef struct {
    char data[MAX];
    int front, rear, size;
} Queue;

void createQueue(Queue *q) {
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

bool isEmptyQueue(Queue *q) {
    return q->size == 0;
}

bool isFullQueue(Queue *q) {
    return q->size == MAX;
}

void enqueue(Queue *q, char val) {
    if (!isFullQueue(q)) {
        q->rear = (q->rear + 1) % MAX;
        q->data[q->rear] = val;
        q->size++;
    }
}

char dequeue(Queue *q) {
    if (!isEmptyQueue(q)) {
        char val = q->data[q->front];
        q->front = (q->front + 1) % MAX;
        q->size--;
        return val;
    }
    return '\0';
}

char front(Queue *q) {
    if (!isEmptyQueue(q)) {
        return q->data[q->front];
    }
    return '\0';
}

typedef struct {
    Queue q1, q2;
    int capacity;
} Stack;

void createStack(Stack *s, int cap) {
    createQueue(&s->q1);
    createQueue(&s->q2);
    s->capacity = cap;
    printf("OK\n");
}

bool isEmptyStack(Stack *s) {
    return isEmptyQueue(&s->q1);
}

bool isFullStack(Stack *s) {
    return s->q1.size == s->capacity;
}

void push(Stack *s, char val) {
    if (isFullStack(s)) {
        printf("Stack full\n");
        return;
    }
    enqueue(&s->q2, val);
    while (!isEmptyQueue(&s->q1)) {
        enqueue(&s->q2, dequeue(&s->q1));
    }
    Queue temp = s->q1;
    s->q1 = s->q2;
    s->q2 = temp;
    printf("OK\n");
}

void pop(Stack *s) {
    if (isEmptyStack(s)) {
        printf("Stack empty\n");
        return;
    }
    char val = dequeue(&s->q1);
    printf("%c\n", val);
}

void empty(Stack *s) {
    printf("%s\n", isEmptyStack(s) ? "True" : "False");
}

int main() {
    Stack s;
    int i, size;
    char val;
    while (1) {
        scanf("%d", &i);

        switch (i) {
            case 1:
                scanf("%d", &size);
                createStack(&s, size);
                break;
            case 2:
                scanf(" %c", &val);
                push(&s, val);
                break;
            case 3:
                pop(&s);
                break;
            case 4:
                empty(&s);
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
