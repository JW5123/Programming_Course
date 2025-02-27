#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;

    while(scanf("%d %d", &a, &b) != EOF) {

        int res = abs(a - b);
        printf("%d\n", res);
    }

    return 0;
}