#include <stdio.h>

int main() {
    
    int fib[40] = {1, 1};
    for(int i = 2; i <= 40; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    int N;
    scanf("%d", &N);
    while(N--) {
        int num;
        scanf("%d", &num);
        printf("%d = ", num);

        int flag = 0;
        for(int i = 40; i >= 1; i--) {
            if(num >= fib[i]) {
                num -= fib[i];
                flag = 1;
                printf("1");
            } else if(flag) {
                printf("0");
            }
        }
        printf(" (fib)\n");
    }

    return 0;
}