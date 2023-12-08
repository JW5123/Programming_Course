#include <stdio.h>

int isprime(int n){
    int k;
    for (k = 2; k < n; k++)
        if (n % k == 0)
            break;

    return k == n;
}

int main(){
    int n, n1, n2;
    while (scanf("%d", &n) != EOF){
        if (isprime(n)){
            n1 = n;
            n2 = 0;
            while (n1){
                n2 = n2 * 10 + n1 % 10;
                n1 /= 10;
            }
            if (n2 != n && isprime(n2))
                printf("%d is a emirp.\n", n);
            else
                printf("%d is a prime.\n", n);
        }
        else
            printf("%d isn't a prime.\n", n);
    }
}