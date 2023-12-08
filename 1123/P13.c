#include <stdio.h>

int GCD(int n, int m){
    if(m == 0)
        return n;
    return GCD(m, n % m);
}

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int res = GCD(n, m);
    printf("%d\n", res);

    return 0;
}