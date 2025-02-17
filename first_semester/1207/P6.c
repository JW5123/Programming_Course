#include <stdio.h>

int secondMax(int arr[], int n){

    int max = -1, second = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            second = max;
            max = arr[i];
        }
        else if(arr[i] > second){
            second = arr[i];
        }
    }
    return second;
}

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int m = secondMax(arr, n);
    printf("%d\n", m);

    return 0;
}