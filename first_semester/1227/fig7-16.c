#include <stdio.h>
#define SIZE 20

size_t getSize(float *ptr){
    return sizeof(ptr);
}

int main(){

    float arr[SIZE];

    printf("The number of bytes in array is %lu\nThe number of bytes returned by getSize is %lu\n", sizeof(arr), getSize(arr));

    return 0;
}