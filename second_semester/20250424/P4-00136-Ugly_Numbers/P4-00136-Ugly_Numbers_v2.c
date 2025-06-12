#include <stdio.h>

int arr[1505];

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {

    FILE *fp_out = fopen("output.txt", "w");

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    arr[5] = 5;

    for(int i = 6; i <= 1500; i++) {
        int index1 = 1;
        while(arr[index1] * 2 <= arr[i - 1]) {
            index1++;
        }
        int index2 = 1;
        while(arr[index2] * 3 <= arr[i - 1]) {
            index2++;
        }
        int index3 = 1;
        while(arr[index3] * 5 <= arr[i - 1]) {
            index3++;
        }

        int d1 = arr[index1] * 2;
        int d2 = arr[index2] * 3;
        int d3 = arr[index3] * 5;

        arr[i] = min(d1, min(d2, d3));
    }

    fprintf(fp_out, "The 1500'th ugly number is %d.\n", arr[1500]);

    return 0;
}