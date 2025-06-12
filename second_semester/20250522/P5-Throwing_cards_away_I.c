#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef struct {
    int data[MAX];
    int front;
    int rear;
} Queue;

void initQueue(Queue *q) {
    q->front = 0;
    q->rear = 0;
}

void enqueue(Queue *q, int data) {
    q->data[q->rear++] = data;
}

int dequeue(Queue *q) {
    return q->data[q->front++];
}

int main() {

    
    int n;
    while (scanf("%d", &n) && n != 0) {
        Queue q;
        initQueue(&q);

        for (int i = 1; i <= n; ++i)
            enqueue(&q, i);

        printf("Discarded cards:");
        while (q.rear - q.front > 1) {
            printf(" %d", dequeue(&q));
            if (q.rear - q.front > 1) {
                printf(",");
            }
            enqueue(&q, dequeue(&q));
        }

        printf("\nRemaining card: %d\n", dequeue(&q));
    }
    return 0;
}
