#include <stdio.h>

int NumSum(int n){

    int sum = 0;
    while(n != 0){
        int s = n % 10;
        sum += s;
        n /= 10;
    }
    return sum;
}

int main(){

    int n;
    printf("Input number: ");
    scanf("%d", &n);

    printf("%d\n", NumSum(n));

    return 0;
}

/*

建立加總整數的函式，利用迴圈當不為0時持續將輸入的數字除以10後取餘數，餘數即為每位數的值，並加總到sum裡後回傳。
主程式裡輸入數字後並呼叫函式輸出結果

*/