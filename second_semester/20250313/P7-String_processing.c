#include <stdio.h>
#include <string.h>
#include <ctype.h>

int str_to_int(char *str) {
    int res = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(isdigit(str[i])) {
            res = res * 10 + (str[i] - '0');
        }
    }
    return res;
}

int main() {
    int n;
    char str[10000];
    
    scanf("%d", &n);
    getchar();
    
    for (int i = 0; i < n; i++) {
        fgets(str, sizeof(str), stdin);
        strtok(str, "\n");

        char *opt = strpbrk(str, "+-*%");
        
        char op = *opt;
        *opt = '\0';
        
        int a = str_to_int(str);
        int b = str_to_int(opt + 1);

        int res;
        if(op == '+')
            res = a + b;
        else if(op == '-')
            res = a - b;
        else if(op == '*')
            res = a * b;
        else if(op == '%')
            res = a % b;
        
        printf("%d", res);

        if (i < n - 1) {
            printf("\n");
        }
    }
    
    return 0;
}