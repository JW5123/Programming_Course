#include <stdio.h>
#include <stdbool.h>

bool increase(int arr[], int n){
    bool inc = true, dec = true;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            inc = false;
        }
        if (arr[i] < arr[i + 1]) {
            dec = false;
        }
    }
    return inc || dec;
}

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int m = increase(arr, n);
    if(m){
        printf("True\n");
    }
    else{
        printf("False\n");
    }

    return 0;
}