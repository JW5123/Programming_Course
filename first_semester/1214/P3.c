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

int searchNum(int *arr, int size, int k){

    for(int i = 0; i < size; i++){
        if(arr[k - 1] == arr[i])
            return arr[i];
    }
    return -1;
}

int main(){

    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];

    memset(arr, 0, sizeof(arr));

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, n);
    int res = searchNum(arr, n, k);

    printf("%d\n", res);

    return 0;
}