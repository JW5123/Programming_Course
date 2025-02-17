#include <stdio.h>
#include <string.h>

int main(){

    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);
    int arr1[n][m];
    int arr2[m][p];
    int res[n][p];
    memset(res, 0, sizeof(res));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            for(int k = 0; k < m; k++){
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}