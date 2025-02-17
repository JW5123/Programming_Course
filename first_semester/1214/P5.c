#include <stdio.h>
#include <string.h>

void sortL(int arr[], int size){

    for(int i = 1; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortR(int arr[], int size){

    for(int i = 1; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(arr[j] < arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    int index = 0;
    memset(arr, 0, sizeof(arr));

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int oddsum = 0, evenSum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            oddsum += 1;
        }
        else{
            evenSum += 1;
        }
    }

    return 0;
}