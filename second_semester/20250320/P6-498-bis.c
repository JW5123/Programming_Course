#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int x;
    char str[10000];

    while (scanf("%d", &x) != EOF) {
        getchar();
        fgets(str, sizeof(str), stdin);
        strtok(str, "\n");

        int coef[1000];
        int n = 0;

        char *token = strtok(str, " ");
        while (token != NULL) {
            coef[n++] = atoi(token);
            token = strtok(NULL, " ");
        }

        int d = 0;
        for (int i = 0; i < n - 1; i++) {
            d = d * x + coef[i] * (n - 1 - i);
        }

        printf("%d\n", d);
    }

    return 0;
}
