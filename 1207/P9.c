#include <stdio.h>

void odd(int *arr, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
}

void even(int *arr, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }
}

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    odd(arr, n);
    even(arr, n);
    printf("\n");

    return 0;
}