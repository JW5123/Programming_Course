#include <stdio.h>

int prime(int a, int m){
    for(int i = 2; i < a; i++){
        if(a % i == 0 && m % i == 0)
            return 0;
    }
    return 1;
}

int main(){

    int x, a, b, e;

    scanf("%d %d %d", &x, &a, &b);
    if(!prime(a, 26)){
        printf("a and m isn't co-prime");
    }
    else{
        e = (a * x + b) % 26;
        printf("%d", e);
    }

    return 0;
}