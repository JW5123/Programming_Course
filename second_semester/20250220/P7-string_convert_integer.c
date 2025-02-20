#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    int number;
    char *ptr;
    int *arr = NULL;
    int count = 0;
    int sum = 0;

    while (1) {
        fgets(input, sizeof(input), stdin);

        number = strtol(input, &ptr, 10);

        arr = (int*)realloc(arr, (count + 1) * sizeof(int));

        arr[count] = number;
        sum += number;
        count++;

        if (count % 6 == 0) {
            double avg = sum / 6.0;
            printf("Sum: %d\nAvg: %.2f\n", sum, avg);
            sum = 0;
        }
    }
    return 0;
}
