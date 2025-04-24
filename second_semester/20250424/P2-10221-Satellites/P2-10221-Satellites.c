#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// #define M_PI 3.14159265358979323846

int main() {

    FILE *fp_in = fopen("P2-10221-Satellites/input.txt", "r");
    FILE *fp_out = fopen("P2-10221-Satellites/output.txt", "w");

    int s, a;
    char d[4];

    while (fscanf(fp_in, "%d %d %s", &s, &a, d) == 3) {

        double r = 6440.0;

        if (strcmp(d, "min") == 0) 
            a /= 60;
        if (a > 180) 
            a = abs(360 - a);
    
        double rad = M_PI / 180.0 * a;
        double arc = (r + s) * rad;
        double chord = 2 * (r + s) * sin(rad / 2);
    
        fprintf(fp_out, "%.6f %.6f\n", arc, chord);
    }
    fclose(fp_in);
    fclose(fp_out);

    return 0;
}