#include <stdio.h>
int main ()
{
    long long n;
    int sum;
    
    while(scanf("%lld", &n) != EOF){
        if (n == 0) {
            break;
        }
        while (n / 10 != 0){
            sum = 0;
            while (n != 0) {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
        printf("%lld\n", n);
    }
    return 0;
}