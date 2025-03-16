#include <stdio.h>
#include <ctype.h>

int main() {

    char str[100]; // 建立字元陣列
    while(fgets(str, sizeof(str), stdin)) { // 迴圈連續輸入字串
        for(int i = 0; str[i] != '\0'; i++) { // 迴圈讀取陣列裡字串的每個字元
            if(isupper(str[i])) { // 使用內建函式判斷是否是大寫
                str[i] = tolower(str[i]); // 將為大寫字元轉換成小寫並存回字元陣列裡
            } else {
                str[i] = toupper(str[i]); // 將為小寫字元轉換成大寫並存回字元陣列裡
            }
        }
        printf("%s\n", str); // 輸出轉換後的字串
    }

    return 0;
}