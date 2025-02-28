#include <stdio.h>
#include <ctype.h>

void encrypt(char *str, int num) {
    for (int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            char temp = isupper(str[i]) ? 'A' : 'a';
            str[i] = (str[i] - temp + num) % 26 + temp;
        }
        if (isdigit(str[i])) {
            str[i] = (str[i] - '0' + num) % 10 + '0';
        }
    }
}

int main() {
    char str[1000];
    int num;

    fgets(str, sizeof(str), stdin);
    scanf("%d", &num);

    encrypt(str, num);

    printf("%s\n", str);

    return 0;
}
