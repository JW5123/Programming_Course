#include <stdio.h>

int main(){

    for(int i = 1; i <= 500; i++){
        printf("$");
        if(i % 50 == 0){
            puts("");
        }
    }

    return 0;
}

/*

根據題目用for迴圈列印500個$符號，利用判斷式判斷是否整除50，若是則換行輸出，否則繼續輸入

*/