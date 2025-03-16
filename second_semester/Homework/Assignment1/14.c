#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char str[20]; // 建立長度為20的字元陣列
    char *area_code, *three, *four;

    fgets(str, sizeof(str), stdin); // 輸入電話號碼字串

    area_code = strtok(str, "()"); // 使用strtok函式，以"()"作為判斷切割出區碼數字
    three = strtok(NULL, "-"); // 以"-"作為判斷切割出前3碼
    four = strtok(NULL, "-"); // 以"-"作為判斷切割出後4碼

    int area = atoi(area_code); // 將區碼字串轉換成整數

    long phone_number = atol(strcat(three, four)); // 將串接後的7碼轉換為long型態

    printf("Area code: %d\n", area); // 輸出區碼
    printf("Phone number: %ld\n", phone_number); // 輸出電號號碼

    return 0;
}