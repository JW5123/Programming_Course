#include <stdio.h>
#include <string.h>

char replaceChar(char c) {
    // 定义键盘上每个字符左边第二个字符的映射关系
    char keyboardMapping[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

    // 在键盘映射中查找字符，并返回替代字符
    char *ptr = strchr(keyboardMapping, c);
    if (ptr != NULL && ptr > keyboardMapping + 1) {
        return *(ptr - 2);
    } else {
        return c; // 如果字符不在映射中或在映射中的位置不合适，则保持原样
    }
}

void replaceString(char *input, char *output) {
    int i;
    for (i = 0; i < strlen(input); i++) {
        output[i] = replaceChar(input[i]);
    }
    output[i] = '\0'; // 在输出字符串的末尾添加null字符，以表示字符串的结束
}

int main() {
    char input[100], output[100];

    // 获取用户输入的字符串
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // 替换字符并输出结果
    replaceString(input, output);
    printf("Replaced string: %s\n", output);

    return 0;
}
