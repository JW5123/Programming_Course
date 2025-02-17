#include <stdio.h>

int findMode(int arr[], int n){
    int maxCount = 0;
    int maxMode = -1;

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = i + 1; j < n; j++){
            if(arr[j] == arr[i])
                count++;
        }
        if(count > maxCount){
            maxCount = count;
            maxMode = arr[i];
        }
    }
    return maxMode;
}

int main(){

    int n;

    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int m = findMode(arr, n);
    printf("%d\n", m);

    return 0;
}