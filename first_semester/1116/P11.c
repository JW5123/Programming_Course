#include <stdio.h>
#include <math.h>

int power(int x, int n) {
    return pow(x, n);
}

int main(){

    int x, n;
    scanf("%d %d", &x, &n);

    int res = power(x, n);
    printf("%d\n", res);

    return 0;
}