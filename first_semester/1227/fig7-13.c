#include <stdio.h>

int main(){

    int x, y;

    int *const ptr = &x;

    *ptr = 7;
    ptr = &y;

    return 0;
}