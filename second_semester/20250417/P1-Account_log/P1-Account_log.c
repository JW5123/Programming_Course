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
    FILE *fp_in = fopen("input.txt", "r");
    FILE *fp_out = fopen("output.txt", "w");
    
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
        if (i == count - 1) {
            fprintf(fp_out, "%-8s%.2f", accounts[i].name, accounts[i].balance);
        } else {
            fprintf(fp_out, "%-8s%.2f\n", accounts[i].name, accounts[i].balance);
        }
    }
    
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}