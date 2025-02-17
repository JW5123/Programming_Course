#include <stdio.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int l = 0, r = 0;
    for(int i = 0; i < n; i++){
        l += arr[i][i];
        r += arr[i][n - i - 1];
    }
    printf("%d\n", l - r);

    return 0;
}