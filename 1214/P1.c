//week14-41d385
#include <stdio.h>
#include <string.h>

void sort(int arr[], int size){

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

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    memset(arr, 0, sizeof(arr));

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}