#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *size;
    int front;
    int rear;
    int input;
} Queue;

Queue* create(int size) {
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->size = (char *)malloc(sizeof(char) * size);
    q->front = -1;
    q->rear = -1;
    q->input = size;
    return q;
}

int isFull(Queue *q) {
    return (q->rear + 1) % q->input == q->front;
}

int isEmpty(Queue *q) {
    return q->front == -1;
}

void enqueue(Queue *q, char value) {
    if (isFull(q)) {
        printf("Queue full\n");
    } else {
        if (q->front == -1)
            q->front = 0;
        q->rear = (q->rear + 1) % q->input;
        q->size[q->rear] = value;
        printf("OK\n");
    }
}

void dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue empty\n");
    } else {
        printf("%c\n", q->size[q->front]);
        if (q->front == q->rear) {
            q->front = -1;
            q->rear = -1;
        } else {
            q->front = (q->front + 1) % q->input;
        }
    }
}

int main() {

    Queue *q = NULL;
    int i;
    while (1) {
        scanf("%d", &i);

        switch(i) {
            case 1:
                int size;
                scanf("%d", &size);
                q = create(size);
                printf("OK\n");
                break;
            case 2:
                char c;
                scanf(" %c", &c);
                enqueue(q, c);
                break;
            case 3:
                dequeue(q);
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