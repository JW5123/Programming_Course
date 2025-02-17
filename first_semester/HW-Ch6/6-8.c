#include <stdio.h>
#define SIZE 10
#define ARR_SIZE 5

int multiply_three(int *arr, int index){

    return arr[index - 1] * 3;
}

int max_element(int (*arr)[ARR_SIZE], int size){

    int res = arr[0][0];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i][j] > res){
                res = arr[i][j];
            }
        }
    }
    return res;
}

int min_element(int (*arr)[ARR_SIZE], int size){

    int res = arr[0][0];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i][j] < res){
                res = arr[i][j];
            }
        }
    }
    return res;
}

int element_sub(int *arr, int size){

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int start[SIZE], end[SIZE], arr[ARR_SIZE][ARR_SIZE];

    for(int i = 0; i < SIZE; i++){
        scanf("%d", &start[i]);
    }

    for(int i = 0; i < ARR_SIZE; i++){
        for(int j = 0; j < ARR_SIZE; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < SIZE; i++){
        scanf("%d", &end[i]);
    }

    int res1 = multiply_three(start, 4);
    int max = max_element(arr, ARR_SIZE);
    int min = min_element(arr, ARR_SIZE);

    int n1 = element_sub(start, SIZE);
    int n2 = element_sub(end, SIZE);

    printf("%d\n%d %d\n%d\n", res1, max, min, n1 - n2);

    return 0;
}