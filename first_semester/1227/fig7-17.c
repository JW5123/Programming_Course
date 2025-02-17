#include <stdio.h>

int main(){

    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int arr[20];
    int *ptr = arr;

    printf("sizeof c = %lu\tsizeof(char) = %lu\n"
            "sizeof s = %lu\tsizeof(short) = %lu\n"
            "sizeof i = %lu\tsizeof(int) = %lu\n"
            "sizeof l = %lu\tsizeof(long) = %lu\n"
            "sizeof ll = %lu\tsizeof(long long) = %lu\n"
            "sizeof f = %lu\tsizeof(float) = %lu\n"
            "sizeof d = %lu\tsizeof(double) = %lu\n"
            "sizeof ld = %lu\tsizeof(long double) = %lu\n"
            "sizeof array = %lu\nsizeof ptr = %lu\n",
            sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i,
            sizeof(int), sizeof l, sizeof(long), sizeof ll,
            sizeof(long long), sizeof f, sizeof(float), sizeof d,
            sizeof(double), sizeof ld, sizeof(long double),
            sizeof arr, sizeof ptr);

    return 0;
}