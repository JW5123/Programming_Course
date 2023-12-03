#include <stdio.h>

int power(int a, int b){
    if(b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main(){

    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        printf("%d\n", power(a, b));
    }

    return 0;
}

/*

建立power函式，條件判斷當次方項為0時，則直接回傳1，否則呼叫遞迴函式進行計算。
每呼叫一次就減1直到b等於0，並回傳計算的值，之後持續回到上一層呼叫函式得出結果

*/