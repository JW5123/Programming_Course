#include <stdio.h>

int main(){

    int n;

    while(scanf("%d", &n) != EOF){
        
        int flag = 0;
        for(int i = 2; i < n; i++){
            if(n % i == 0)
                flag = 1;
        }
        if(flag || n == 1){
            printf("It's not a prime\n");
        }
        else{
            printf("It's a prime\n");
        }
    }

    return 0;
}

/*

利用迴圈while，當輸入不等於EOF(=-1)時則可以持續輸入直到按下Ctrl+Z才停止程式，
先設定一個flag為0(false)，接者用for迴圈從2(0和1不是質數)開始跑到輸入的數字，
再判斷輸入數字除以每個數是否整除，若能整除則將flag設為1(true)，最後判斷flag若為1時或輸入為1時則輸出不是質數否則是質數

*/