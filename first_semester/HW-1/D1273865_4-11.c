#include <stdio.h>

int main(){

    int sum = 0;
    
    for(int num = 1; num <= 100; num++){
        if(num % 7 == 0){
            sum += num;
        }
    }
    printf("Sum of all multiples of 7 from 1 to 100 is %d\n", sum);

    return 0;
}

/*

設變數sum為0用以儲存加總結果，用for迴圈從1到100循環，接著判斷如果可以整除7就進行加總，最後輸出7倍數總和

*/