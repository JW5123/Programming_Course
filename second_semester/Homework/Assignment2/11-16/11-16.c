#include <stdio.h>

int main() {

    FILE *fp = fopen("datasize.data", "w");

    fprintf(fp, "%-24s%6s\n", "Data type", "Size");
    fprintf(fp, "%-24s%6I64u\n", "char", sizeof(char));
    fprintf(fp, "%-24s%6I64u\n", "unsigned char", sizeof(unsigned char));
    fprintf(fp, "%-24s%6I64u\n", "short int", sizeof(short int));
    fprintf(fp, "%-24s%6I64u\n", "unsigned short int", sizeof(unsigned short int));
    fprintf(fp, "%-24s%6I64u\n", "int", sizeof(int));
    fprintf(fp, "%-24s%6I64u\n", "unsigned int", sizeof(unsigned int));
    fprintf(fp, "%-24s%6I64u\n", "long int", sizeof(long int));
    fprintf(fp, "%-24s%6I64u\n", "unsigned long int", sizeof(unsigned long int));
    fprintf(fp, "%-24s%6I64u\n", "float", sizeof(float));
    fprintf(fp, "%-24s%6I64u\n", "double", sizeof(double));
    fprintf(fp, "%-24s%6I64u\n", "long double", sizeof(long double));

    fclose(fp);

    return 0;
}