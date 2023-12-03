#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define Number 1000

// 判斷完美數
int isPerfect(int n){
    
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        return true;
    }
    return false;
}

// 印出完美數的因數
void PrintList(int n){

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(){

    for(int i = 1; i <= Number; i++){
        if(isPerfect(i)){
            printf("%d = ", i);
            PrintList(i);
        }
    }

    return 0;
}

/*

建立判斷完美數的函式，利用迴圈跑到該數的值減1(不包含數字本身)並判斷該值整除每個數後的餘數是否為0，
若是則加到sum裡，最後判斷sum是否等於要判斷的值(n)，是回傳true，不是回傳false

另外再建立一個印出所有因數的函式，和上面作法相同，最後印出該數所有因數，最後並換行

主程式內迴圈執行1到1000內的數，並呼叫isPerfect函式判斷，最後印出完美數及該數的因數

*/