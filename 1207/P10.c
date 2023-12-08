#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int mod(int a, int b){
    return a < 0 ? b + a % b : a % b; 
}

void rightMove(int arr[], int n, int k){
    int d = gcd(n, abs(k));
    for(int i = 0; i < d; i++){
        int t = i;
        int x = arr[t];
        for(int j = 1; j < n / d; j++){
            arr[t] = arr[mod(t - k, n)];
            t = mod(t - k, n);
        }
        arr[t] = x;
    }
}

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    rightMove(arr, n, m);
    
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}