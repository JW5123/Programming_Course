#include <stdio.h>
#include <string.h>

int mutiple2(char str[]) {
    
    int len = strlen(str);
    int sum = 0;

    for (int i = 0; i < len; i++) {
        sum += str[i] - '0';
    }
    return (sum % 3 == 0);
}

int main() {
    char str[100];
    scanf("%s", str);

    if (mutiple2(str)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
