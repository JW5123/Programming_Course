#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int number;
    char name[50];
    float balance;
} Account;

int cmp(const void *a, const void *b) {
    return ((Account *)a)->number - ((Account *)b)->number;
}

int main() {
    FILE *fp_in = fopen("P1-Account_log/input.txt", "r");
    FILE *fp_out = fopen("P1-Account_log/output.txt", "w");
    
    char line[100];
    fgets(line, sizeof(line), fp_in);
    
    Account accounts[100];
    int count = 0;
    
    while (fscanf(fp_in, "%d %s %*s %f", 
                &accounts[count].number, 
                accounts[count].name, 
                &accounts[count].balance) == 3) {
        count++;
    }

    qsort(accounts, count, sizeof(Account), cmp);
    
    fprintf(fp_out, "Name    Balance\n");
    for (int i = 0; i < count; i++) {
        int name_len = strlen(accounts[i].name);
        int title_name_len = 4;
        int spaces = 4;
        
        if (name_len <= title_name_len) {
            fprintf(fp_out, "%s", accounts[i].name);
            for (int j = 0; j < title_name_len - name_len + spaces; j++) {
                fprintf(fp_out, " ");
            }
        } 
        else {
            fprintf(fp_out, "%s", accounts[i].name);
            for (int j = 0; j < spaces; j++) {
                fprintf(fp_out, " ");
            }
        }
        
        if (i == count - 1) {
            fprintf(fp_out, "%.2f", accounts[i].balance);
        } else {
            fprintf(fp_out, "%.2f\n", accounts[i].balance);
        }
    }
    
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}