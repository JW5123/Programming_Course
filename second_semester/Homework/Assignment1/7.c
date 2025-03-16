#include <stdio.h>
#include <stdlib.h>

int main() {

    int t; 
    scanf("%d", &t);  // 要輸入幾個字串數量
    getchar(); // 清除 scanf 輸入後殘留的換行符號

    char str[t][10]; // 建立字元陣列，t為要存入的字串數量，並且數字長度設為10

    for(int i = 0; i < t; i++) {
        fgets(str[i], sizeof(str[i]), stdin); // 輸入整數字串，存入字元陣列裡
    }

    int sum = 0;
    for(int i = 0; i < t; i++) {
        sum += atoi(str[i]); // 將整數字元轉換成整數型態並累加
    }

    printf("Sum = %d\nAvg = %d\n", sum, sum / t); // 輸出總和和平均值

    return 0;
}