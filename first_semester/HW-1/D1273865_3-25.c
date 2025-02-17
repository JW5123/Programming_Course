#include <stdio.h>

int main(){

    int a = 7, res;

    printf("%-10s%-10s%-10s%-10s\n\n", "A", "A+3", "A+6", "A*9");
    for(int i = 1; i <= 5; i++){
        res = a * i;
        printf("%-10d%-10d%-10d%-10d\n", res, res + 3, res + 6, res * 9);
    }

    return 0;
}

/*

先設定a變數為7，再利用for迴圈將1到5各數分別乘上變數a後存入res變數，
根據題目給的規定，分別輸出A、A+3、A+6、A+9，並將輸出靠左10個欄位

*/