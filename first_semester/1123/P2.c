#include <stdio.h>
int f(int a){

    int sum = 0;
    while(a != 0){
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main(){

    int n;

    while(scanf("%d", &n) != EOF){
        while(f(n) >= 10){
            n = f(n);
        }
        printf("%d\n", f(n));
    }

    return 0;
}