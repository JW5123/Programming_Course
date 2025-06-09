#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* removeStars(char* s) {
    int len = strlen(s);
    char *stack = (char*)malloc(sizeof(char) * len + 1);
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        if (s[i] == '*') {
            top--;
        } else {
            stack[++top] = s[i]; 
        }
    }

    stack[++top] = '\0';
    return stack;
}

int main() {

    char input[1001];
    while (fgets(input, sizeof(input), stdin)){
        strtok(input, "\n");
        printf("%s\n", removeStars(input));
    }

    return 0;
}
