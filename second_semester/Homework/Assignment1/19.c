#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int count_words(char *str) {

    int count = 0;
    int inWord = 0; // 標記是否目前在單字範圍內
    for(int i = 0; str[i] != '\0'; i++) { // 遍歷字串
        if(isalpha(str[i])) { // 判斷遍歷到的字串是否是字母
            if(!inWord) { // 表示進入第一個單字
                count++; // 計數單字數量
                inWord = 1; // 標記目前在單字內
            }
        } else {
            inWord = 0; // 若不是字母，表示離開單字
        }
    }

    return count;
}

void remove_word(char *str, char *word) {
    char res[SIZE];

    // 分割字串
    char *token = strtok(str, " ");
    while(token != 0) {
        // 比較要刪除的單字是否在字串裡
        if(strcmp(token, word) != 0) {
            strcat(res, token); // 若不是要刪除的單字則加回res陣列
            strcat(res, " "); // 每個單字的空格
        }
        token = strtok(NULL, " ");
    }
    
    strcpy(str, res); // 將處裡後的字串複製回str
}

int main() {

    int n = 2;
    char str[n][SIZE];

    while(1) {
        for(int i = 0; i < n; i++) {
            fgets(str[i], sizeof(str[i]), stdin); // 輸入字串和要刪除的特定單字
            strtok(str[i], "\n");
        }

        int ori_word_count = count_words(str[0]); // 計算刪除前的單字數量
        printf("Original count: %d\n", ori_word_count); // 輸出原來的單字數量

        remove_word(str[0], str[1]); // 呼叫移除函式，移除指定單字

        int new_word_count = count_words(str[0]); // 計算刪除後的單字數量
        printf("New count: %d\n", new_word_count); // 輸出新的單字數量

        printf("New string: %s\n\n", str[0]); // 輸出新的字串
    }

    return 0;
}