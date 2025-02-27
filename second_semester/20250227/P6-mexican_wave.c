#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[101];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            str[i] = toupper(str[i]);
            printf("%s\n", str);
            str[i] = tolower(str[i]);
        }
    }

    return 0;
}