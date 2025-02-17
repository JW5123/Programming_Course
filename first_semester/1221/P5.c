#include <stdio.h>

int main(){

    int n, m, flag = 0;;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j] < 0)
                flag = 1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[i][j] != arr[n - i - 1][m - j - 1]){
                flag = 1;
                break;
            }
        }
    }
    if(flag){
        printf("Non-symmetric.\n");
    }
    else{
        printf("Symmetric.\n");
    }

    return 0;
}