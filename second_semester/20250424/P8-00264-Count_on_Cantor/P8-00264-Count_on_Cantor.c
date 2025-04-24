#include <stdio.h>

int main() {
    
    FILE *fp_in = fopen("P8-00264-Count_on_Cantor/input.txt", "r");
    FILE *fp_out = fopen("P8-00264-Count_on_Cantor/output.txt", "w");

    int n;
    while(fscanf(fp_in, "%d", &n) != EOF) {
        int i = 1, sum = 0;

        while(1) {
            sum += i;
            if (sum >= n)
                break;
            i++;
        }

        int l = i, r = 1;

        sum -= n;
        if (i % 2 == 0) {
            fprintf(fp_out, "TERM %d IS %d/%d\n", n, l - sum, r + sum);
        } else {
            fprintf(fp_out, "TERM %d IS %d/%d\n", n, r + sum, l - sum);
        }
    }

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}