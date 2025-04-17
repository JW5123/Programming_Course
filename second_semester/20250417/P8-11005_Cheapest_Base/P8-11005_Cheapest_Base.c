#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_BASE 36

int cost[MAX_BASE];

int get_cost(int num, int base) {
    int total = 0;
    if (num == 0) 
        return cost[0];

    while (num > 0) {
        int digit = num % base;
        total += cost[digit];
        num /= base;
    }
    return total;
}

int main() {

    FILE *fp_in = fopen("input.txt", "r");
    FILE *fp_out = fopen("output.txt", "w");

    int T, case_num = 1;
    fscanf(fp_in, "%d", &T);

    while (T--) {
        fprintf(fp_out, "Case %d:\n", case_num++);
        
        for (int i = 0; i < MAX_BASE; ++i) {
            fscanf(fp_in, "%d", &cost[i]);
        }

        int Q;
        fscanf(fp_in, "%d", &Q);

        while (Q--) {
            int n;
            fscanf(fp_in, "%d", &n);

            int min_cost = 1e9;
            int best_bases[MAX_BASE], base_count = 0;

            for (int i = 2; i <= MAX_BASE; ++i) {
                int current_cost = get_cost(n, i);
                if (current_cost < min_cost) {
                    min_cost = current_cost;
                    base_count = 0;
                    best_bases[base_count++] = i;
                } else if (current_cost == min_cost) {
                    best_bases[base_count++] = i;
                }
            }

            fprintf(fp_out, "Cheapest base(s) for number %d: ", n);
            for (int i = 0; i < base_count; ++i) {
                if(i == base_count - 1) {
                    fprintf(fp_out, "%d", best_bases[i]);
                } else {
                    fprintf(fp_out, "%d ", best_bases[i]);
                }
            }
            fprintf(fp_out, "\n");
        }
        fprintf(fp_out, "\n");
    }
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
