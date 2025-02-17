#include <stdio.h>
#include <string.h>

int mutiple4(const char *str) {
    int len = strlen(str);

    int lastDigit = str[len - 1] - '0';

    if (len == 1 && lastDigit == 0) {
        return 1;
    }

    if (len >= 2) {
        int lastTwoDigits = (str[len - 2] - '0') * 10 + lastDigit;

        return (lastTwoDigits % 4 == 0);
    }
    return 0;
}

int main() {
    char arr[41];
    scanf("%40s", arr);

    if (mutiple4(arr)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
