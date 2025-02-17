#include <stdio.h>
#include <string.h>

int main(){

    int n = 4, m = 6;
    int arr[n][m];
    memset(arr, 0, sizeof(arr));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        int sum = 0;
        for(int j = 1; j < m; j++){
            sum += arr[i][j];
        }
        printf("%d\n", sum);
    }

    printf("$ ");
    for(int i = 1; i < m; i++){
        int col = 0;
        for(int j = 0; j < n; j++){
            col += arr[j][i];
        }
        printf("%d ", col);
    }
    printf("\n");

    return 0;
}