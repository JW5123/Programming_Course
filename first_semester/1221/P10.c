#include <stdio.h>
#include <string.h>

int multiple11(char str[]) {

    int oddSum = 0, evenSum = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (i % 2 == 0) {
            evenSum += str[i] - '0';
        } else {
            oddSum += str[i] - '0';
        }
    }

    int res = evenSum - oddSum;
    return res % 11 == 0 || (res % 11 == 0 && res == 0);
}

int main() {
    char arr[41];
    scanf("%s", arr);

    if (multiple11(arr)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
