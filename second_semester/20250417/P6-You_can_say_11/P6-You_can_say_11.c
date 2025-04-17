#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp_in = fopen("P6-You_can_say_11/input.txt", "r");
    FILE *fp_out = fopen("P6-You_can_say_11/output.txt", "w");

    char s[100];
    while (fscanf(fp_in, "%s", s) == 1) {
        if (s[0] == '0') {
            break;
        } 
        int odd = 0, even = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (i % 2) {
                odd += s[i] - '0';
            } else {
                even += s[i] - '0';
            }
        }
        if ((odd - even) % 11 == 0) {
            fprintf(fp_out, "%s is a multiple of 11.\n", s);
        } else {
            fprintf(fp_out, "%s is not a multiple of 11.\n", s);
        }
    }
    fclose(fp_in);
    fclose(fp_out);
    
    return 0;
}