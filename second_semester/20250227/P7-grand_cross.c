#include <stdio.h>

int main() {
    int R, C, N;

    while (scanf("%d %d %d", &R, &C, &N) != EOF) {
        int arr[R][C];
        int row = -1, col = -1;

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (arr[i][j] == N) {
                    row = i;
                    col = j;
                    break;
                }
            }
            if (row != -1)
                break;
        }

        int res[R + C - 1];
        int index = 0;

        for (int j = 0; j < C; j++) {
            res[index++] = arr[row][j];
        }

        for (int i = 0; i < R; i++) {
            if (i != row) { 
                res[index++] = arr[i][col];
            }
        }

        int max = res[0];
        for (int i = 1; i < index; i++) {
            if (res[i] > max) {
                max = res[i];
            }
        }

        printf("%d\n", max);
    }

    return 0;
}
