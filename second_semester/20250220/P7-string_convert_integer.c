#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[50];
    char *ptr;
    int *arr = NULL;
    int count = 0;
    int sum = 0;

    while (fgets(input, sizeof(input), stdin)) {

        arr = (int*)realloc(arr, (count + 1) * sizeof(int));

        arr[count] = strtol(input, &ptr, 0);
        sum += arr[count++];
        
        if (count % 6 == 0) {
            double avg = sum / 6.0;
            printf("Sum: %d\nAvg: %.2f\n", sum, avg);
            sum = 0;
        }
    }

    free(arr);

    return 0;
}
