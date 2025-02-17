#include <stdio.h>

void MaxList(int *arr, int n, int element){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] >= element)
            printf("%d ", arr[i]);
    }
}

void MinList(int *arr, int n, int element){
    int min = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] < element)
            printf("%d ", arr[i]);
    }
}

int main(){

    int n, target;
    scanf("%d %d", &n, &target);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    MinList(arr, n, target);
    printf("\n");
    MaxList(arr, n, target);


    return 0;
}