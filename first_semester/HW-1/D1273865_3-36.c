#include <stdio.h>
#include <math.h>

int armstrong(int num){

    int number = num;
    int n, sum = 0;

    while(num != 0){
        n = num % 10;
        sum += pow(n, 3);
        num /= 10;
    }  
    return (sum == number) ? 1 : 0;
}

int main(){

    int num = 999;

    for(int i = 100; i <= num; i++){
        if(armstrong(i))
            printf("%d ", i);
    }
    return 0;
}

/*

將判斷部分寫成函式，先利用變數number儲存輸入的數字，並且設定變數sum為0作為每位數的的3次方總和，
利用while迴圈不斷執行並將輸入數字除以10後取餘數，直到每位數除完後退出迴圈，並判斷sum是否等於輸入的數，若是則回傳1，否則回傳0，
主程式部分用for迴圈從100開始到999，並用判斷式呼叫amstrong函式進行判斷，最後輸出所有阿姆斯壯數

*/