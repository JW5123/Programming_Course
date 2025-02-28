#include <stdio.h>

int isPalidrome(int n) {

    int r = 0;
    int str = n;

    while(n != 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }

    return r == str ? 1 : 0;
}

int main() {

    int n;
    while(scanf("%d", &n) != EOF) {

        int res = isPalidrome(n);

        if(res) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}