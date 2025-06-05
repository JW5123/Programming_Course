#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100

bool is_pair(char cur, char tmp) {
    if (cur == ')' && tmp == '(')
        return true;
    else if (cur == '}' && tmp == '{')
        return true;
    else if (cur == ']' && tmp == '[')
        return true;
    return false;
}

bool isValid(char *s) {
    char stack[MAX];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            if ( top == -1 || !is_pair(s[i], stack[top--])) {
                return false;
            }
        }
    }

    return top == -1;
}

int main() {
    char input[MAX];
    while (fgets(input, MAX, stdin)) {
        if(input[0] == '0'){
            printf("quit\n");
            break;
        }
        printf("%s", isValid(input) ? "YES\n" : "NO\n");
    }
    return 0;
}