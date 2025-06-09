#include <stdio.h>

#define MAX 100

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {
        int queue[MAX];
        int front = 0, rear = n - 1;

        for (int i = 0; i < n; i++) {
            queue[i] = i + 1;
        }

        printf("Discarded cards:");
        while (rear - front >= 1) {
            printf(" %d", queue[front++]);

            if (rear - front >= 1) 
                printf(",");
            queue[++rear] = queue[front++];
        }

        printf("\nRemaining card: %d\n", queue[front]);
    }

    return 0;
}
