#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a, b;
    int *ptr_a = &a, *ptr_b = &b;

    while(scanf("%d %d", ptr_a, ptr_b) != EOF) {
        
        if(*ptr_a == -1 && *ptr_b == -1) {
            break;
        }

        if(*ptr_a > *ptr_b) {
            swap(ptr_a, ptr_b);
        }

        int *result = (*ptr_b - *ptr_a < 100 - *ptr_b + *ptr_a) ? ptr_b : ptr_a;
        if (result == ptr_b) {
            printf("%d\n", *ptr_b - *ptr_a);
        } else {
            printf("%d\n", 100 - *ptr_b + *ptr_a);
        }
    }

    return 0;
}

// down key; hint: a + 1 + ( 99 – b ) = 100 + a – b