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

    int n, m;
    scanf("%d %d", &n, &m);
    int arr1[n];
    int arr2[m];
    int res[n + m];
    int index = 0;

    memset(arr1, 0, sizeof(arr1));
    memset(arr2, 0, sizeof(arr2));
    memset(res, 0, sizeof(res));

    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }


    for(int i = 0; i < m; i++){
        scanf("%d", &arr2[i]);
    }
    
    for(int i = 0; i < n; i++){
        res[index] = arr1[i];
        index++;
    }

    for(int i = 0; i < m; i++){
        res[index] = arr2[i];
        index++;
    }

    sort(res, n + m);

    for(int i = 0; i < n + m; i++){
        printf("%d ", res[i]);
    }
    

    return 0;
}