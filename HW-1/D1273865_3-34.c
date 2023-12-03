#include <stdio.h>

int main(){

    int n = 1;
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= i; j++){
            printf("%-3d ", n++);
        }
        puts("");
    }

    return 0;
}

/*

第一迴圈執行要列印的行數，第二迴圈根據i值決定每一行要印出幾個數字，
n++為根據該行第一個數字向後加1個數，接著用puts換行繼續輸出，
每一個數都靠左3個欄位

*/