#include <stdio.h>

void f(long long x){
    if(x / 10000000 != 0){
        f(x / 10000000);
        printf(" kuti ");
        x %= 10000000;
    }
    if(x / 100000 != 0){
        f(x / 100000);
        printf(" lakh ");
        x %= 100000;
    }
    if(x / 1000 != 0){
        f(x / 1000);
        printf(" hajar ");
        x %= 1000;
    }
    if(x / 100 != 0){
        f(x / 100);
        printf(" shata ");
        x %= 100;
    }
    if(x != 0){
        printf("%lld", x);
    }
}

int main(){

    long long n;
    scanf("%lld\n", &n);
    f(n);

    return 0;
}