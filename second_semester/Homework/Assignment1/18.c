#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[101];
    char alpha[] = "aeiou"; // 建立母音字元陣列

    while(fgets(str, sizeof(str), stdin) && strtok(str, "\n")) { // 輸入字串並刪除換行

        int vowels = 0, consonants = 0, digits = 0, spaces = 0;

        for(size_t i = 0; i < strlen(str); i++) { // 迴圈讀取陣列裡字串的每個字元
            char c = tolower(str[i]); // 先將所有字元轉換為小寫，方便後續判斷

            if(isalpha(c)) { // 判斷如果是字母
                if(strchr(alpha, c)) { // 接著判斷字串裡是否有母音
                    vowels++; // 是母音加1
                } else {
                    consonants++; // 是子音加1
                }
            } else if(isdigit(c)) { // 判斷如果是數字
                digits++;
            } else if(isspace(c)) { // 判斷如果是空格
                spaces++;
            }
        }

        // 輸出結果
        printf("vowels: %d\nconsonants: %d\ndigits: %d\nspaces: %d \n\n", vowels, consonants, digits, spaces);
    }

    return 0;
}