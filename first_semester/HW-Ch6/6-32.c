#include <stdio.h>

int searchElement(int *arr, int size, int k){

    for(int i = 0; i < size; i++){
        if(k == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int res = searchElement(arr, n, m);
    printf("%d\n", res);

    return 0;
}