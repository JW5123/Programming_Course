#include <stdio.h>

void swap(int *arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {

    int n, length;
    scanf("%d", &n);
    for(int s = 0 ; s < n; s++) {
        scanf("%d", &length);
        int train[length];
        int count = 0;
        for(int i = 0; i < length; i++) {
            scanf("%d", &train[i]);
        }

        for(int i = 0; i < length - 1; i++) {
            for(int j = i + 1; j < length; j++) {
                if(train[i] > train[j]) {
                    swap(train, i, j);
                    count++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", count);

    }


    return 0;
}