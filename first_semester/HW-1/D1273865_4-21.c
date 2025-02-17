#include <stdio.h>

int main(){

    for(int num = 0; num <= 127; num++){
        printf("%c ", num);
        if(num % 10 == 0){
            puts("");
        }
    }

    return 0;
}

/*

用for迴圈從0到127，並使用各式化輸出%c直接將整數轉成字元，判斷輸出如果整除10則換行

*/