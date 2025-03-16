#include <stdio.h>
#include <string.h>

int main() {

    int n = 2;

    char str[n][100]; // 建立字元陣列，t為要存入的字串數量，並且數字長度設為100

    for(int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin); // 輸入整數字串，存入字元陣列裡
        strtok(str[i], "\n"); // 刪除fgets自動產生的換行符號，避免最後輸出串接後的字串有換行情形
    }
    
    for(int i = 0; i < n; i++) {
        printf("String %d: %s\n", i + 1, str[i]); // 輸出第一、二個輸入的字串
    }
    printf("Connect two string: %s\n", strcat(str[0], str[1])); // 輸出附加後的字串
    printf("String Length: %Iu\n", strlen(str[0])); // 輸出串接後的字串長度

    return 0;
}