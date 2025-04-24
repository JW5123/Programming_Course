#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int a, count = 0, temp = 0;
    temp = 1;
    while (count <= 1500) {
        a = temp;
        while (a % 2 == 0) {
            a = a / 2;
        }
        while (a % 3 == 0) {
            a = a / 3;
        }
        while (a % 5 == 0) {
            a = a / 5;
        }
        if (a == 1) {
            count++;
            if (count == 1500)
            {
                break;
            }
        //    printf_s("It is an ugly number.");
        }
        temp++;
    }
    printf("The 1500'th ugly number is %d.", temp);
    return 0;
}