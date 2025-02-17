#include <stdio.h>

int GCD(int a, int b){
    if(b == 0)
        return a;
    return GCD(b, a % b);
}

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", GCD(n, m));

    return 0;
}