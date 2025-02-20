#include <stdio.h>

int decTobin(int n) {
    int cnt = 0;

    for(int i = n; i > 0; i /= 2) {
        cnt += i % 2;
    }
    return cnt;
}

int hexTobin(int n) {
    int cnt = 0;
    while(n != 0) {
        int temp = n % 10;
        for(int i = temp; i > 0; i /= 2) {
            cnt += i % 2;
        }
        n /= 10;
    }

    return cnt;
}

int main() {

    int n;
    scanf("%d", &n);

    while(n--) {
        int N;
        scanf("%d", &N);

        int res1 = decTobin(N);
        int res2 = hexTobin(N);

        printf("%d %d\n", res1, res2);
    }

    return 0;
}