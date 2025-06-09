#include <stdio.h>
#include <stdlib.h>

int *queue;
int size = 0;
int front = 0;
int tail = 0;

void createQueue(int queueSize) {
    queue = (int*)malloc(queueSize * sizeof(int));
    size = queueSize;
    printf("OK\n");
}

int isFull() {
    return (tail + 1) % size == front;
}

int isEmpty() {
    return front == tail;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue full\n");
    } else {
        queue[tail] = value;
        tail = (tail + 1) % size;
        printf("OK\n");
    }
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue empty\n");
    } else {
        int value = queue[front];
        front = (front + 1) % size;
        printf("%c\n", value);
    }
}

void quit() {
    printf("quit\n");
    exit(0);
}

int main() {
    int option, queueSize;
    char value;

    while (1) {
        scanf("%d", &option);

        switch(option) {
            case 1:
                scanf("%d", &queueSize);
                createQueue(queueSize + 1);
                break;
            case 2:
                scanf(" %c", &value);
                enqueue(value);
                break;
            case 3:
                dequeue();
                break;
            case 0:
                quit();
                break;
            default:
                break;
        }
    }

    return 0;
}
