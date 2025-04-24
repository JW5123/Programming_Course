#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    FILE *fp_out = fopen("P4-00136-Ugly_Numbers/output.txt", "w");
    
    int arr[1500];
    arr[0] = 1;
    int a2 = 0, a3 = 0, a5 = 0;

    for (int i = 1; i < 1500; i++) {
        
        int temp;
        if (arr[a2] * 2 < arr[a3] * 3) {
            temp = arr[a2] * 2;
        } else {
            temp = arr[a3] * 3;
        }

        if (temp > arr[a5] * 5) {
            temp = arr[a5] * 5;
        }

        arr[i] = temp;

        if (arr[i] == arr[a2] * 2) 
            a2++;
        if (arr[i] == arr[a3] * 3) 
            a3++;
        if (arr[i] == arr[a5] * 5) 
            a5++;
    }
    
    fprintf(fp_out, "The 1500'th ugly number is %d.", arr[1499]);

    return 0;
}