#include <stdio.h>
int arr[1000000];
int func(int x, int n) {
    long long sum = 0;
    int exp = 1;
    for (int i = n - 1; i >= 0; i--) {
        sum += arr[i] * exp * (n - i);
        exp *= x;
    }
    return sum;
}
int main() {
    int x;
    while (scanf("%d", &x) == 1) {
        int n = 0;
        while (1) {
            scanf("%d", &arr[n]);
            if (getchar() == '\n') {
                break;
            }
            n++;
        }
        printf("%d\n", func(x, n));
    }
    return 0;
}