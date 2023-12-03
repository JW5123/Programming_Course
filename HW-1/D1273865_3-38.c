#include <stdio.h>

int numberSize(int number){

    int size = 0;
    while(number > 0){
        size++;
        number /= 10;
    }
    return size;
}

int countNumber(int number){
    
    int count = 0;

    while(number != 0){
        int digit = number % 10;
        if(digit == 9){
            count += 1;
        }
        number /= 10;
    }
    return count;
}

int main(){

    int number, size, count;

    printf("Enter 5 digits number: ");
    while(scanf("%d", &number) != EOF){
        size = numberSize(number);
        if(size > 5){
            printf("Error, enter 5 digits number: ");
            continue;
        }
        break;
    }

    count = countNumber(number);
    printf("Number %d contains %d nines\n", number, count);

    return 0;
}

/*

設numberSize函式，設變數size紀錄數字長度，用while迴圈除以10直到除完，每除一次size加1，最後回傳size。
設countNumber函式，設變數count為0，用while迴圈不斷除以10取餘數，並紀錄每次餘數是否為9，若是則count加1，最後回傳count
主程式設變數number、size、count為輸入數、數字長度、是9的數量，用while迴圈不斷輸入數字，並且呼叫numberSize函式判斷是否超過5位數，若是則重新輸入，否則退出迴圈，
接著呼叫countNumber函式判斷輸入數字中出現幾次9，最後輸出結果

*/