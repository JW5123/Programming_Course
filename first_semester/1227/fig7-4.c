#include <stdio.h>

int main(){

    int a = 7;
    int *ptr = &a;
    
    printf("The address of a is %p\nThe value of ptr is %p\n", &a, &ptr);
    printf("\nThe value of a is %d\nThe value of a is %d\n", a, *ptr);
    printf("\nShowing that * and & are complements of each other\n&*ptr = %p\n*&ptr = %p\n", &*ptr, *&ptr);

    return 0;
}