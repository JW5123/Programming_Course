#include <stdio.h>
int GCD(int a, int b){
    if(a % b == 0)
        return b;
    return GCD(b, a % b);
}

int main(){

    int a1, a2, b1, b2;
    scanf("%d/%d", &a1, &a2);
    scanf("%d/%d", &b1, &b2);

    int n1, n2, s1, s2, res, M, N;

    if(a2 % b2 != 0 || b2 % a2 != 0){
        M = a2 * b2;
        n1 = a1 * b2;
        s1 = b1 * a2;
        N = n1 + s1;
    }
    else if(a2 % b2 == 0 || b2 % a2 == 0){
        if(a2 > b2){
            int t = a2 / b2;
            s1 = b1 * t;
            M = a2;
            N = s1;
        }
        else if(a2 < b2){
            int t = b2 / a2;
            n1 = a1 * t;
            M = b2;
            N = n1;
        }
    }

    int gcd = GCD(N, M);

    printf("%d/%d\n", N / gcd, M / gcd);

    return 0;
}