#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    FILE *fp_in = fopen("P7-00256-Quirksome_Squares/input.txt", "r");
    FILE *fp_out = fopen("P7-00256-Quirksome_Squares/output.txt", "w");

    int num[10000];
    for (int n = 0; n <= 9999; ++n) {
        num[n] = n * n;
    }

    int d;
    while (fscanf(fp_in, "%d", &d) == 1) {
        for (int i = 0; i <= 9999; ++i) {
            if (num[i] >= pow(10, d)) {
                break;
            }
            int left = num[i] / pow(10, d / 2);
            int right = num[i] % (int)pow(10, d / 2);
            if ((left + right) * (left + right) == num[i]) {
                fprintf(fp_out, "%0*d\n", d, num[i]);
            }
        }
    }

    fclose(fp_in);
    fclose(fp_out);
    
    return 0;
}