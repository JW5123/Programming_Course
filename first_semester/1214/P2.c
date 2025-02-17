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

int midNum(int arr[], int size){

    int sum = 0, res = 0;
    if(size % 2 == 0){
        int a = arr[((size + 1) / 2) - 1];
        int b = arr[((size + 1) / 2) + 1];
        res = (a + b) / 2;
    }
    else if(size % 2 != 0){
        res = arr[size / 2];
    }

    return res;
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
    int res = midNum(arr, n);
    printf("%d\n", res);


    return 0;
}