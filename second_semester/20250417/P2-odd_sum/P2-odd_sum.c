#include <stdio.h>

int main() {
    FILE *fp_in =  fopen("P2-odd_sum/input.txt", "r");
    FILE *fp_out = fopen("P2-odd_sum/output.txt", "w");

    int n;
    fscanf(fp_in, "%d", &n);

    while (n--) {
        int a, b;
        int sum = 0;
        fscanf(fp_in, "%d %d", &a, &b);
        for (int i = a; i <= b; i++) {
            if (i % 2 == 1) {
                sum += i;
            }
        }
        fprintf(fp_out, "%d\n", sum);
    }

    fclose(fp_in);
    fclose(fp_out);
    return 0;
}