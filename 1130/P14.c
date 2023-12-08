#include <stdio.h>
#include <string.h>

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
        int isUnique = 1;
        for(int j = 0; j < n; j++){
            if(i != j && arr1[i] == arr1[j]){
                isUnique = 0;
                break;
            }
        }
        if(isUnique){
            printf("%d ", arr1[i]);
        }
    }

    for(int i = 0; i < m; i++){
        int isUnique = 1;
        for(int j = 0; j < m; j++){
            if(i != j && arr2[i] == arr2[j]){
                isUnique = 0;
                break;
            }
        }
        for(int k = 0; k < n; k++){
            if(arr2[i] == arr1[k]){
                isUnique = 0;
                break;
            }
        }
        if(isUnique){
            printf("%d ", arr2[i]);
        }
    }

    return 0;
}