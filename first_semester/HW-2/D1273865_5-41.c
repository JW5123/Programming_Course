#include <stdio.h>

int isPrime(int n, int i){
    if(n <= 2)
        return n == 2;
    if(n % i == 0)
        return 0;
    if(i * i > n)
        return 1;
    return isPrime(n, i + 1);
}

int main(){

    int n;
    while(scanf("%d", &n) != EOF){
        printf(isPrime(n, 2) ? "is prime\n" : "not prime\n");
    }
}

/*

建立判斷質數的函式，參數為要檢查的數n和測試的除數i(設為2)，第一個條件為
當n <= 2的時候，判斷n是否為2，若是則回傳1(true)，否則回傳0(false)。
第二個條件為，n是否能被除數(2)整除，若是則回傳0(false)。
第三個條件為，除數的平方是否大於n，如果是則回傳1(true)，若條件皆不滿足，則使用遞迴方式檢查下一個除數

*/