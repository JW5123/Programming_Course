#include <stdio.h>

int ABS(int a, int b){
    if(a < b)
        return b - a;
    return a - b;
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", ABS(a, b));


    return 0;
}