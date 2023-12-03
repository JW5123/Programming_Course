#include <stdio.h>

int GCD(int a, int b){
    if(a % b == 0)
        return b;
    return GCD(b, a % b);
}

int main(){

    int a, b;

    while(scanf("%d %d", &a, &b) != EOF){
        printf("%d\n", GCD(a, b));
    }

    return 0;
}

/*

建立最大公因數函式，條件判斷當a整除b的餘數為0時，則直接回傳b即為最大公因數，
否則使用遞迴函式進行計算

*/