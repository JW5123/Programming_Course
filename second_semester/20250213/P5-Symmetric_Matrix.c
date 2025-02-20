#include <stdio.h>
#include <stdbool.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int s = 1; s <= n; s++) {
        int size;
        scanf("%d", &size);
        int arr[size][size];
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        bool flag = true;
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if(arr[i][j] != arr[size-1-i][size-1-j] || arr[i][j] < 0 || arr[size-1-i][size-1-j] < 0) {
                    flag = false;
                    break;
                }
            }
        }

        printf("Test #%d: ", s);
        if(flag) {
            printf("Symmetric.\n");
        } else {
            printf("Non-symmetric.\n");
        }

    }

    return 0;
}