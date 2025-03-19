#include <stdio.h>

int reverse(int n) {
    int r = 0;

    while(n != 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int isPrime(int n) {
    if(n < 2)
        return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int n;
    while(scanf("%d", &n) != EOF) {
        int cmp1 = isPrime(n);
        int int_rev = reverse(n);
        int cmp2 = isPrime(int_rev);

        if(cmp1 == 1 && cmp2 == 1) {
            if(n == int_rev) {
                printf("%d is prime.\n", n);
            } else {
                printf("%d is emirp.\n", n);
            }
        } else  if(cmp1 == 1 && cmp2 == 0) {
            printf("%d is prime.\n", n);
        } else {
            printf("%d is not prime.\n", n);
        }
    }

    return 0;
}