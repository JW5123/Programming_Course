#include <stdio.h>

int main(){

    int n;
    while(1){
        scanf("%d", &n);
        int arr[n];

        if(n == 0){
            break;
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}