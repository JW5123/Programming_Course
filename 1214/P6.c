#include <stdio.h>
#include <stdlib.h>

int* twoSum(int *arr, int size, int t){
    int *res = (int*)malloc(2 * sizeof(int));
    int temp;
    for(int i = 0; i < size; i++){
        temp = t - arr[i];
        for(int j = i + 1; j < size; j++){
            if(temp == arr[j]){
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    return res;
}

int main(){

    int n, t;
    scanf("%d %d", &n, &t);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int *res = twoSum(arr, n, t);

    printf("%d %d\n", res[0], res[1]);

    return 0;
}