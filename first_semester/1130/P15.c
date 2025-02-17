#include <stdio.h>
int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int arr1[n], arr2[m];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i] == arr2[j]){
                printf("%d ", arr2[j]);
            }
        }
    }

    return 0;
}