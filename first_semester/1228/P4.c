#include <stdio.h>

int main(){

    long long int a, b;

    while(scanf("%lld %lld", &a, &b) != EOF){
        long long int c = a - b;
        if(c < 0)
            c *= -1;
        printf("%lld\n", c);
    }

    return 0;
}