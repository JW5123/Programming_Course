#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 500

int priority(char opt){
    switch(opt){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}

void inToPostfix(char* infix, char* postfix){
    char stack[MAX];
    int top = -1;
    int i = 0, j = 0;

    while (infix[i] != '\0') {
        if (isdigit(infix[i])) {
            while (isdigit(infix[i])) {
                postfix[j++] = infix[i++];
            }
            postfix[j++] = ' ';
            continue;
        }
        else if (infix[i] == '(') {
            stack[++top] = '(';
        }
        else if (infix[i] == ')') {
            while (top >= 0 && stack[top] != '(') {
                postfix[j++] = stack[top--];
                postfix[j++] = ' ';
            }
            if (top >= 0) top--;
        }
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/') {
            while (top >= 0 && priority(stack[top]) >= priority(infix[i])) {
                postfix[j++] = stack[top--];
                postfix[j++] = ' ';
            }
            stack[++top] = infix[i];
        }
        i++;
    }
    while (top >= 0) {
        postfix[j++] = stack[top--];
        postfix[j++] = ' ';
    }
    postfix[j] = '\0';
}

int calculate(char op, int a, int b){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

int eval(char* postfix){
    int stack[MAX];
    int top = -1;
    char* token = strtok(postfix, " ");

    while (token != NULL) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            stack[++top] = atoi(token);
        } else {
            int b = stack[top--];
            int a = stack[top--];
            stack[++top] = calculate(token[0], a, b);
        }
        token = strtok(NULL, " ");
    }
    return stack[top];
}

int main(){
    int n;
    scanf("%d", &n);
    getchar();

    char expr[MAX];
    char postfix[MAX];
    
    for(int i = 0; i < n; i++){
        fgets(expr, sizeof(expr), stdin);
        strtok(expr, "\n");

        inToPostfix(expr, postfix);
        int ans = eval(postfix);
        printf("%d\n", ans);
    }
    return 0;
}
