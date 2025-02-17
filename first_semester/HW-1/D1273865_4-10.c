#include <stdio.h>

double celsiusToFahrenheit(double c){
    return (9 * c) / 5 + 32;
}

int main(){

    printf("Celsius\t\tFahrenheit\n");
    for(int c = 30; c <= 50; c++){
        printf("%d\t\t%.2f\n", c, celsiusToFahrenheit(c));
    }

    return 0;
}

/*

設攝氏轉華氏函式，並回傳公式計算後的結果，主程式用for迴圈從30到50循環並呼叫攝氏轉華氏函式輸出結果

*/