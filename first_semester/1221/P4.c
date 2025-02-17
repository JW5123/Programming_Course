#include <stdio.h>
#include <string.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int res[n][m];
    memset(res, 0, sizeof(res));


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res[i][j] = arr[j][n - 1 - i];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}