#include <stdio.h>
#include <ctype.h>

int main() {
    char str[60];
    int count[26] = {0};
    
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            count[tolower(str[i]) - 'a']++;
        }
        i++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("%c:%d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}