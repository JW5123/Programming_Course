#include <stdio.h>
#include <stdlib.h>

int main() {

    int t; 
    scanf("%d", &t); // 要輸入幾個字串數量
    getchar(); // 清除 scanf 輸入後殘留的換行符號

    char str[t][10]; // 建立字元陣列，t為要存入的字串數量，並且數字長度設為10

    for(int i = 0; i < t; i++) {
        fgets(str[i], sizeof(str[i]), stdin); // 輸入浮點數字串，存入字元陣列裡
    }

    double arr[t]; // 建立浮點數陣列
    for(int i = 0; i < t; i++) {
        arr[i] = strtod(str[i], NULL); // 使用strtod函式將浮點數字串轉換成浮點數並存入浮點數陣列裡
    }

    double sum = 0;
    for(int i = 0; i < t; i++) {
        sum += arr[i]; // 讀取浮點數陣列裡的數字並累加數字
    }

    printf("Sum = %.2f\nAvg = %.2f\n", sum, sum / t); // 輸出總和和平均值

    return 0;
}