#include <stdio.h>
#include <string.h>
#define MAX 105

char ara[MAX][MAX];
char now;
int r, c, M, N;

int check(int n) {
    if(r - n < 0) 
        return 0;
    if(r + n >= M) 
        return 0;
    if(c - n < 0) 
        return 0;
    if(c + n >= N) 
        return 0;

    for(int i = r - n; i <= r + n; i++) {
        if(ara[i][c - n] != now) 
            return 0;
        if(ara[i][c + n] != now) return 0;
    }
    for(int i = c - n; i <= c + n; i++) {
        if(ara[r - n][i] != now) 
            return 0;
        if(ara[r + n][i] != now) 
            return 0;
    }
    return 1;
}

int main() {

    FILE *fp_in = fopen("P4-Largest_Squares/input.txt", "r");
    FILE *fp_out = fopen("P4-Largest_Squares/output.txt", "w");

    int t, Q;
    fscanf(fp_in, "%d", &t);
    while (t--) {
        fscanf(fp_in, "%d %d %d", &M, &N, &Q);
        for (int i = 0; i < M; i++) {
            fscanf(fp_in, "%s", ara[i]);
        }

        fprintf(fp_out, "%d %d %d\n", M, N, Q);
        for (int i = 0; i < Q; i++) {
            fscanf(fp_in, "%d %d", &r, &c);
            now = ara[r][c];
            int cnt = 1;
            while (check(cnt)) 
                cnt++;
            fprintf(fp_out, "%d\n", 2 * cnt - 1);
        }
    }
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
