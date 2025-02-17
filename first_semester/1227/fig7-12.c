#include <stdio.h>

void f(const int *ptr){

    *ptr = 100;
}

int main(){

    int y;
    f(&y);

    return 0;
}