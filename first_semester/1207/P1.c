#include <stdio.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int arr1[n];
    int arr2[m];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < m; i++){
        scanf("%d", &arr2[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i] == arr2[j]){
                break;
            }
            else{
                if(arr1[i] != arr2[j] && j == m - 1)
                    printf("%d ", arr1[i]);
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr1[i] == arr2[i]){
                break;
            }
            else{
                if(arr1[i] != arr2[j] && j == n - 1)
                    printf("%d ", arr2[i]);
            }
        }
    }
    

    return 0;
}