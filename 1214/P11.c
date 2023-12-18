#include <stdio.h>

int main(){

    int n, l, r;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    while(scanf("%d %d", &l, &r) != EOF){
        if(l == -1 && r == -1)
            break;
    
        int sum = 0;
        for(int i = l; i <= r; i++){
            sum += arr[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}