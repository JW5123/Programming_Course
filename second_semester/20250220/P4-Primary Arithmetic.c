#include <stdio.h>

int main() {

    int a, b;
    while(scanf("%d %d", &a, &b) != EOF) {
        if(a == 0 && b == 0)
            break;

        int carry = 0, cnt = 0;
        while(a > 0 || b > 0) {
            int temp = a % 10 + b % 10 + carry;
            // a:555, b:555 : 5 + 5 + 0 >= 10
            if(temp >= 10) {
                carry = temp / 10; // 10 / 10 = 1
                cnt++; // current cnt = 1
            } else {
                carry = 0;
            }
            a /= 10;
            b /= 10;
        }

        if(cnt == 0) {
            printf("No carry operation.\n");
        } else if(cnt == 1) {
            printf("1 carry operation.\n");
        } else {
            printf("%d carry operations.\n", cnt);
        }
    }

    return 0;
}