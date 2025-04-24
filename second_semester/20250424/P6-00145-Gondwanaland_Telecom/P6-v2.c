#include <stdio.h>
#include <string.h>

double get_rate(char step, int minute) {
    int period;
    if (minute < 480)
        period = 0;
    else if (minute < 1080)
        period = 1;
    else if (minute < 1320)
        period = 2;
    else
        period = 0;

    switch (step) {
        case 'A': return (double[]){0.10, 0.06, 0.02}[period];
        case 'B': return (double[]){0.25, 0.15, 0.05}[period];
        case 'C': return (double[]){0.53, 0.33, 0.13}[period];
        case 'D': return (double[]){0.87, 0.47, 0.17}[period];
        case 'E': return (double[]){1.44, 0.80, 0.30}[period];
        default: return 0.0;
    }
}

int main() {
    FILE *fp_in = fopen("test/input.txt", "r");
    FILE *fp_out = fopen("test/output.txt", "w");

    char step;
    int h1, m1, h2, m2;
    char phone[20];

    while (fscanf(fp_in, " %c", &step) == 1) {
        if (step == '#')
            break;

        fscanf(fp_in, "%s %d %d %d %d", phone, &h1, &m1, &h2, &m2);

        int start = h1 * 60 + m1;
        int end = h2 * 60 + m2;
        if (end < start) 
            end += 1440;

        int day = 0, evening = 0, night = 0;
        double cost = 0.0;

        for (int i = start; i < end; i++) {
            int minute = i % 1440;

            double rate = get_rate(step, minute);
            cost += rate;

            if (minute < 480 || minute >= 1320)
                night++;
            else if (minute < 1080)
                day++;
            else
                evening++;
        }

        fprintf(fp_out, "%10s%6d%6d%6d%3c%8.2f\n", phone, day, evening, night, step, cost);
    }

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
