#include <stdio.h>
#include <string.h>

int main() {

    int n = 2;
    char str[n][101];

    for(int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin); // 輸入整數字串，存入字元陣列裡
        strtok(str[i], "\n"); // 刪除fgets自動產生的換行符號，避免最後輸出串接後的字串有換行情形
    }

    int num;
    scanf("%d", &num); // 輸入要附加的字元數
    
    for(int i = 0; i < n; i++) {
        printf("String %d: %s\n", i + 1, str[i]); // 輸出第一、二個輸入的字串
    }
    printf("Number of character: %d\n", num); // 輸出附加字元數
    printf("After addition string: %s\n", strncat(str[0], str[1], num)); // 輸出附加後的字串
    printf("String Length: %Iu\n", strlen(str[0])); // 輸出串接後的字串長度

    return 0;
}