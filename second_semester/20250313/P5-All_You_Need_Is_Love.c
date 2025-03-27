#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int GCD(int a, int b) {
    if(b == 0)
        return a;
    return GCD(b, a % b);
}

int main() {
    int n, cases = 1;
    char S1[31], S2[31];

    scanf("%d", &n);

    while (n--) {
        scanf("%s %s", S1, S2);

        int num1 = strtol(S1, NULL, 2);
        int num2 = strtol(S2, NULL, 2);

        if (GCD(num1, num2) != 1) {
            printf("Pair #%d: All you need is love!\n", cases++);
        } else {
            printf("Pair #%d: Love is not all you need!\n", cases++);
        }
    }

    return 0;
}
