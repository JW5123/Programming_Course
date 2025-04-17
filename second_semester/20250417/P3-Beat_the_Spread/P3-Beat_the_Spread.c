#include <stdio.h>

int main() {

    FILE *fp_in =  fopen("P3-Beat_the_Spread/input.txt", "r");
    FILE *fp_out = fopen("P3-Beat_the_Spread/output.txt", "w");

    int n, s, d;

    fscanf(fp_in, "%d", &n);

    while(n--) {
        fscanf(fp_in, "%d %d", &s, &d);

        if((s + d) % 2 || s < d) {
            fprintf(fp_out, "impossible\n");
        } else {
            fprintf(fp_out,"%d %d\n", (s + d) / 2, (s - d) / 2);
        }
    }
    fclose(fp_in);
    fclose(fp_out);

    return 0;
}