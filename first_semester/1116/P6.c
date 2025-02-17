#include <stdio.h>

int Discriminant(int a, int b, int c) {
    int res = (b * b) - 4 * a * c;
    if(res >= 0){
        return 0;
    }
    return 1;
}


int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int res = Discriminant(a, b, c);
    printf("%d\n", res);

    return 0;
}