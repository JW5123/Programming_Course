#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char search[100];
    char *searchPtr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // 輸入字串
    strtok(str, "\n");

    printf("Enter a search string: ");
    fgets(search, sizeof(search), stdin); // 輸入要搜尋的字串
    strtok(search, "\n");

    searchPtr = strstr(str, search); // 使用內建函式strstr搜尋第一次出現的位置
    if (searchPtr) { 
        printf("First found: %s\n", searchPtr); // 找到第一次出現位置並輸出剩餘字串

        searchPtr = strstr(searchPtr + 1, search); // 使用內建函式strstr搜尋第二次出現的位置
        if (searchPtr) {
            printf("Second found: %s\n", searchPtr); // 找到第二次出現位置並輸出剩餘字串
        } else {
            printf("Second not found.\n"); // 未找到第二次出現位置
        }
    } else { 
        printf("Not found\n"); // 未找到第一次出現位置
    }

    return 0;
}