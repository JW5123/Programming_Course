#include <stdio.h>
#include <ctype.h>

int main() {

    char c;
    scanf(" %c", &c); // 輸入要判斷的字元

    // 使用isalnum函式判斷是否是數字，並輸出回傳的值
    printf("isalnum: %s, value: %d\n", isalnum(c) ? "YES" : "NO", isalnum(c));
    // 使用isalpha函式判斷是否是字母，並輸出回傳的值 
    printf("isalpha: %s, value: %d\n", isalpha(c) ? "YES" : "NO", isalpha(c));
    // 使用iscntrl函式判斷是否是控制字符，並輸出回傳的值
    printf("iscntrl: %s, value: %d\n", iscntrl(c) ? "YES" : "NO", iscntrl(c));
    // 使用isdigit函式判斷是否是十進制數字，並輸出回傳的值
    printf("isdigit: %s, value: %d\n", isdigit(c) ? "YES" : "NO", isdigit(c)); 
    // 使用isgraph函式判斷是否是圖形，並輸出回傳的值
    printf("isgraph: %s, value: %d\n", isgraph(c) ? "YES" : "NO", isgraph(c)); 
    // 使用islower函式判斷是否是小寫字母，並輸出回傳的值
    printf("islower: %s, value: %d\n", islower(c) ? "YES" : "NO", islower(c)); 
    // 使用isupper函式判斷是否是大寫字母，並輸出回傳的值
    printf("isupper: %s, value: %d\n", isupper(c) ? "YES" : "NO", isupper(c)); 
    // 使用isspace函式判斷是否是空白字符，並輸出回傳的值
    printf("isspace: %s, value: %d\n", isspace(c) ? "YES" : "NO", isspace(c)); 
    // 使用ispunct函式判斷是否是標點符號字符，並輸出回傳的值
    printf("ispunct: %s, value: %d\n", ispunct(c) ? "YES" : "NO", ispunct(c)); 
    // 使用isxdigit函式判斷是否是十六進制，並輸出回傳的值
    printf("isxdigit: %s, value: %d\n", isxdigit(c) ? "YES" : "NO", isxdigit(c)); 

    return 0;
}