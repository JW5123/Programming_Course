#include <stdio.h>
#include <string.h>

int main() {

    char str[100]; // 建立字元陣列
    int count = 0;

    // 輸入字串
    while(fgets(str, sizeof(str), stdin)) {
        // 分割字串
        char *token = strtok(str, " ");
        while(token != NULL) {
            count++; // 計數單字
            token = strtok(NULL, " ");
        }
    }
    printf("Word Count: %d\n", count); //輸出結果

    return 0;
}