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

    int x, y;
    int res = arr[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] > res){
                res = arr[i][j];
                x = i;
                y = j;
            }
        }
    }

    printf("%d %d %d\n", res, x, y);

    return 0;
}