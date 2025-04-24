#include <stdio.h>

int main() {

    FILE *fp_in = fopen("P1-00105-The_Skyline_Problem/input.txt", "r");
    FILE *fp_out = fopen("P1-00105-The_Skyline_Problem/output.txt", "w");

    int L, H, R, coordinate[10001] = {0};

    while(fscanf(fp_in, "%d %d %d", &L, &H, &R) == 3) {
        for (int i = L; i < R; ++i )
            if (H > coordinate[i])
                coordinate[i] = H;
    }

    for(int i = 0; i < 10000; ++i) {
        if (coordinate[0])
            fprintf(fp_out, "0 %d ", coordinate[0]);

        if (coordinate[i + 1] != coordinate[i])
            fprintf(fp_out, "%d %d ", (i + 1), coordinate[i + 1]);
    }

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}