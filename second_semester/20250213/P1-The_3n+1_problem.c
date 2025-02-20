#include <stdio.h>

int main() {

    int a, b, x, y;

    while(scanf("%d %d", &a, &b) != EOF) {

        x = a, y = b;

        if(a > b) {
            int t = a;
            a = b;
            b = t;
        }

        int max = 0;
        for(int i = a; i <= b; i++) {
            int n = i;
            int count = 1;

            while(n != 1) {
                if(n % 2 == 1) {
                    n = 3 * n + 1;
                } else {
                    n /= 2;
                }
                count++;
            }

            count > max ? max = count : 0;
        }

        printf("%d %d %d\n", x, y, max);
    }

    return 0;
}