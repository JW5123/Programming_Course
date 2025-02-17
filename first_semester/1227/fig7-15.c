#include <stdio.h>
#define SIZE 10

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int * const array, const size_t size){

    for(unsigned int i = 0; i < size - 1; i++){
        for(size_t j = 0; j < size - 1; j++){
            if(array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
        }
    }
}

int main(){

    int arr[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    printf("Data items in original order\n");

    for(int i = 0; i < SIZE; i++){
        printf("%4d", arr[i]);
    }

    bubbleSort(arr, SIZE);

    printf("\nData items in ascending order\n");

    for(size_t i = 0; i < SIZE; i++){
        printf("%4d", arr[i]);
    }

    return 0;
}