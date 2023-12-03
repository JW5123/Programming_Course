#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NumberAmount 10

double dollars(){

    double max = 34.0, min = 27.0;

    return (max - min) * rand() / (RAND_MAX + 1.0) + min;
}

double toYen(double usDollars){
    return usDollars * 118.87;
}

double toEuro(double usDollars){
    return usDollars * 0.92;
}

int main(){

    srand(time(NULL));

    printf("%-7s %-10s %-10s %-10s\n", "Nums", "Dollars", "Yens", "Euros");
    printf("-----------------------------------\n");
    for(int i = 1; i <= NumberAmount; i++){

        double dollarAmount = dollars();
        double yenAmount = toYen(dollarAmount);
        double euroAmount = toEuro(dollarAmount);

        printf("%-7d %-10.2lf %-10.2lf %-10.2lf\n", i, dollarAmount, yenAmount, euroAmount);
    }

    return 0;
}

/*

根據題目要求建立等值日元函式及等值歐元函式，並且分別回傳計算後的匯率。
建立一個美元匯率的函式，這裡使用隨機亂數(該寫法是針對浮點數型式)取10年間的匯率，因此區間最大值設為34.0，最小值設為27.0
主程式內使用srand()亂數種子確保每次執行結果都不同，利用迴圈執行到設定的次數，並且呼叫dollars函式以獲取美元匯率，
接著分別呼叫日元及歐元換算匯率函式，將計算結果使用表個方式印出


*/