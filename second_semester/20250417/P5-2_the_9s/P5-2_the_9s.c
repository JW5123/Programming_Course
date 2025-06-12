#include <stdio.h>

int cal_sum(char* arr) {
    int sum = 0;
    for (int i = 0; arr[i]; i++)
        sum += arr[i] - '0';
    return sum;
}

int cal_degree(int n) {
    int degree = 1;
    while (n > 9) {
        degree++;
        int sum = 0, temp = n;
        while (temp) {
            sum += temp % 10;
            temp /= 10;
        }
        n = sum;
    }
    return degree;
}

int main() {

    FILE *fp_in = fopen("P5-2_the_9s/input.txt", "r");
    FILE *fp_out = fopen("P5-2_the_9s/output.txt", "w");

    char arr[1001];
    while (fscanf(fp_in, "%s", arr) == 1) {
        if (arr[0] == '0') {
            break;
        }
        int sum = cal_sum(arr);
        int degree = cal_degree(sum);
        if (sum % 9 == 0) {
            fprintf(fp_out, "%s is a multiple of 9 and has 9-degree %d.\n", arr, degree);
        } else {
            fprintf(fp_out, "%s is not a multiple of 9.\n", arr);
        }
    }
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}