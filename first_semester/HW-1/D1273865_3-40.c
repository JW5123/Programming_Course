#include <stdio.h>

unsigned long power(int base, int exp){

    unsigned long result = 1;
    for (int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
}

int main(){

    int pow = 1;

    while(1){
        unsigned long res = power(3, pow);
        printf("%lu\n", res);
        pow++;
    }

    return 0;
}

/*

設一個power函式，將型態設為無號整數，參數base設要進行計算的數，exp為次方數，
設變數result為儲存結果，用for迴圈循環次方數，並乘上base數存入result後回傳結果，
主程式先設變數pow為1，接著while無限迴圈，呼叫power函式後每執行一次pow就加1，並將每次結果輸出

*/