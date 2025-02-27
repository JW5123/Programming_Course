#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);

    while(n--) {
        double N, p, i;

        scanf("%lf %lf %lf", &N, &p, &i);
        double q = 1 - p;
        if(p == 0) {
            printf("0.0000\n");
        } else {
            printf("%.4lf\n", (pow(q, (i - 1)) * p) / (1 - pow(q, N)));
        }
    }

    return 0;
}