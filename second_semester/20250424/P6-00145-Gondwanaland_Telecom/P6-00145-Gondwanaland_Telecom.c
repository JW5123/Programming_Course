#include <stdio.h>
#include <string.h>
#define NUM_STEPS 5
#define NUM_RATES 7

double map[NUM_STEPS][NUM_RATES] = {
    {0.02, 0.10, 0.06, 0.02, 0.10, 0.06, 0.02},
    {0.05, 0.25, 0.15, 0.05, 0.25, 0.15, 0.05},
    {0.13, 0.53, 0.33, 0.13, 0.53, 0.33, 0.13},
    {0.17, 0.87, 0.47, 0.17, 0.87, 0.47, 0.17},
    {0.30, 1.44, 0.80, 0.30, 1.44, 0.80, 0.30}
};

int bound[] = {480, 1080, 1320, 1920, 2520, 2760, 2880};

int main() {
    
    FILE *fp_in = fopen("P6-00145-Gondwanaland_Telecom/input.txt", "r");
    FILE *fp_out = fopen("P6-00145-Gondwanaland_Telecom/output.txt", "w");

    char step;
    int h1, m1, h2, m2;
    char phone[20];

    while (1) {
        fscanf(fp_in, " %c", &step);
        if(step == '#') 
            break;

        fscanf(fp_in, "%s %d %d %d %d", phone, &h1, &m1, &h2, &m2);

        double cost = 0.0;
        int Time[NUM_RATES] = {0};

        m1 += h1 * 60;
        m2 += h2 * 60;
        if (m2 < m1) {
            m2 += 24 * 60;
        }

        int step_index = step - 'A';

        for (int i = 0; i < NUM_RATES; i++) {
            if (m1 <= bound[i]) {
                if (m2 <= bound[i]) {
                    Time[i] = m2 - m1;
                    cost += map[step_index][i] * Time[i];
                    break;
                } else {
                    Time[i] = bound[i] - m1;
                    cost += map[step_index][i] * Time[i];
                    m1 = bound[i];
                }
            }
        }

        fprintf(fp_out, "%10s%6d%6d%6d%3c%8.2f\n", phone, Time[1]+Time[4],
                Time[2]+Time[5], Time[0]+Time[3]+Time[6], step, cost);
    }
    fclose(fp_in);
    fclose(fp_out);

    return 0;
}