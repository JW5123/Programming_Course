#include <stdio.h>

int main() {
    
    FILE *fp_in = fopen("P3-00108-Maximum_Sum/input.txt", "r");
    FILE *fp_out = fopen("P3-00108-Maximum_Sum/output.txt", "w");
    
    int n, a[105][105], ans, total;

    while (fscanf(fp_in, "%d", &n) == 1) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                fscanf(fp_in, "%d", &a[i][j]);
                a[i][j] += a[i][j - 1];
            }
        }
        ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                total = 0;
                for (int k = 1; k <= n; k++) {
                    total += a[k][j] - a[k][i];
                    if (ans < total) {
                        ans = total;
                    }
                    if (total < 0) {
                        total = 0;
                    }
                }
            }
        }
        fprintf(fp_out, "%d\n", ans);
    }

    fclose(fp_in);
    fclose(fp_out);
    
    return 0;
}