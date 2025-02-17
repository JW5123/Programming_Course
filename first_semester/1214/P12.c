#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[30];

    for(int i = 0; i < n - 1; i++){
        scanf("%d", &arr[i]);
    }

    int t = 1;
    for(int i = 0; i < n; i++){
        if(t != arr[i]){
            printf("%d\n", t);
            break;
        }
        t++;
    }

    return 0;
}