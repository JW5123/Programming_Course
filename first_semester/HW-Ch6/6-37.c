#include <stdio.h>

int min_element(int *arr, int size){

    int res = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < res){
            res = arr[i];
        }
    }
    return res;
}

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int res = min_element(arr, n);
    printf("%d\n", res);

    return 0;
}