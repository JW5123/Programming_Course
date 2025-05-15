#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* removeStars(char* s) {
    int len = strlen(s);
    char stack[len + 1]; // 加1為'\0'
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        if (s[i] == '*') {
            if (top >= 0) {
                top--;
            }
        } else {
            stack[++top] = s[i]; 
        }
    }

    stack[top + 1] = '\0';
    strcpy(s, stack);
    return s;
}

int main() {

    char input[1001];
    while (fgets(input, sizeof(input), stdin)){
        strtok(input, "\n");
        printf("%s\n", removeStars(input));
    }

    return 0;
}
