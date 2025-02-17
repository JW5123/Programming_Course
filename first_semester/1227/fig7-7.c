#include <stdio.h>

void cubeByReference(int *ptr){
    *ptr = *ptr * *ptr * *ptr;
}

int main(){

    int num = 5;
    
    printf("The original value of number is %d", num);

    cubeByReference(&num);

    printf("\nThe new value of number is %d\n", num);

    return 0;
}