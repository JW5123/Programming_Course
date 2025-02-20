#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isJolly(int arr[], int size) {

    bool *store = (bool*)malloc(size * sizeof(bool));

    for(int i = 0; i < size - 1; i++) {
        int d = abs(arr[i] - arr[i + 1]);

        if (d == 0 || d >= size || store[d]) {
            return false;
        }

        store[d] = true;
    }
    return true;
}

int main() {

    int n;

    while(scanf("%d", &n) != EOF) {
        
        int arr[n];
        memset(arr, 0, sizeof(arr));

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        if(isJolly(arr, n))
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }

    return 0;
}