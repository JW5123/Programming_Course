#include <stdio.h>
#include <string.h>

int main() {

    char str[101]; // 建立長度為101的字串陣列
    char *word[101]; // 建立長度為101的指標字串陣列，儲存分割後的單詞

    while(fgets(str, sizeof(str), stdin) && strtok(str, "\n")) { // 輸入字串並且刪除換行符號
        
        int cnt = 0;
        // 分割字串後存入word陣列裡
        char *token = strtok(str, " ");
        while(token != NULL) {
            word[cnt++] = token;
            token = strtok(NULL, " ");
        }

        // 輸出word陣列裡的單詞
        printf("\nString split:\n");
        for(int i = 0; i < cnt; i++) {
            printf("word[%d] = %s\n", i, word[i]);
        }
        // 輸出反轉後的單詞字串
        printf("\nReverse string: ");
        for(int i = cnt - 1; i >= 0; i--) {
            printf("%s ", word[i]);
        }
        printf("\n\n");
    }

    return 0;
}