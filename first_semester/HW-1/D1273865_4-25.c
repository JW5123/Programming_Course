#include <stdio.h>
#include <math.h>

int decToBin(int decimal){
    int binary = 0, remainder, factor = 1;
    while(decimal != 0){
        remainder = decimal % 2;
        binary += remainder * factor;
        decimal /= 2;
        factor *= 10;
    }
    return binary;
}

int main(){

    printf("%-20s%-20s%-20s%-20s\n", "Decimal", "Binary", "Octal", "Hexadecimal");
    for(int num = 1; num <= 256; num++){
        printf("%-20d%-20d%-20o%-20x\n", num, decToBin(num), num, num);
    }

    return 0;
}

/*

設decToBin函式，型態為整數，參數為接收整數型態decimal，設定變數binary、remainder、factor，分別儲存轉換後的二進制、每一步的餘數、二進制的位置，
while迴圈輸入數字不等於0則持續循環，十進制除以2的餘數儲存到remainder，餘數乘上factor加到binary以儲存二進制數字，factor乘以10為控制二進制每一位數的位置，
主程式用for迴圈從1到256循環，輸出部分十進位直接輸出，二禁制則呼叫函式後輸出，八進位和十六進位使用內建格式%o、%x直接作轉換，每個輸出都靠左20個欄位

*/