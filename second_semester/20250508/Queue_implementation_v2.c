#include <stdio.h>
#include <stdlib.h>

int *queue;
int size = 0;
int front = 0;
int rear = 0;

void createQueue(int queueSize) {
    queue = (int*)malloc(queueSize * sizeof(int));
    size = queueSize + 1;
    printf("OK\n");
}

int isFull() {
    return (rear + 1) % size == front;
}

int isEmpty() {
    return front == rear;
}

void enqueue(int data) {
    if (isFull()) {
        printf("Queue full\n");
    } else {
        queue[rear] = data;
        rear = (rear + 1) % size;
        printf("OK\n");
    }
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue empty\n");
    } else {
        int data = queue[front];
        front = (front + 1) % size;
        printf("%c\n", data);
    }
}

void quit() {
    printf("quit\n");
    exit(0);
}

int main() {
    int option, queueSize;
    char data;

    while (1) {
        scanf("%d", &option);

        switch(option) {
            case 1:
                scanf("%d", &queueSize);
                createQueue(queueSize);
                break;
            case 2:
                scanf(" %c", &data);
                enqueue(data);
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
