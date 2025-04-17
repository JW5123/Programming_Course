#include <stdio.h>
int main() {

    FILE *fp_in = fopen("P7-10931_Parity/input.txt", "r");
    FILE *fp_out = fopen("P7-10931_Parity/output.txt", "w");

    int n;
    int arr[10000];
    while (fscanf(fp_in, "%d", &n) != EOF) {
        if(n == 0)
            break;
        int count = 0, i = 0;
        while(n != 0) {
            arr[i] = n % 2;
            n /= 2;
            if (arr[i] == 1) {
                count++;
            }
            i++;
        }
        i--;
        fprintf(fp_out, "The parity of ");
        while(i >= 0) {
            fprintf(fp_out, "%d", arr[i]);
            i--;
        }
        fprintf(fp_out, " is %d (mod 2).\n", count);
    }
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}