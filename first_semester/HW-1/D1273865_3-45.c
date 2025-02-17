#include <stdio.h>
#include <math.h>

unsigned int factorial(int num){
    int fac = 1;
    for(int i = 1; i <= num; i++){
        fac *= i;
    }
    return fac;
}

float e_constant(int num){
    float e = 1.0;

    for(int i = 1; i <= num; i++){
        e += 1.0 / factorial(i);
    }
    return e;
}

float e_exponent(int num){
    float e = 1.0;

    for(int i = 1; i <= num; i++){
        e += pow(num, i) / factorial(i);
    }
    return e;
}

int main(){

    unsigned int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("%d! is %d\n", n, factorial(n));
    printf("e constant is %.2f\n", e_constant(n));
    printf("e exponent is %.2f\n", e_exponent(n));
    
    return 0;
}

/*

設factorial函式，型態為無號整數，參數為接收整數型態num，先設變數fac為1，用for迴圈從1到num循環，根據公式計算全部總和存入fac後回傳
設e_constant函式，型態為float，參數為接收整數型態num，先設變數e為1.0，用for迴圈從1到num循環，根據公式計算全部總和存入e後回傳結果
設e_exponent函式，型態為float，參數為接收整數型態num，先設變數e為1.0，用for迴圈從1到num循環，根據公式計算全部總和存入e後回傳結果
e_constant、e_exponent函式需先算出階乘才能進行計算
主程式設變數n以儲存輸入的數，接著分別呼叫函式以輸出運算結果

*/