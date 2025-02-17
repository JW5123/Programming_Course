#include <stdio.h>

int main(){

    int u, a, t, v, s;

    scanf("%d %d %d", &u, &a, &t);
    v = u + (a * t);
    s = (u * t) + (a * (t * t)) * 0.5;

    printf("Final velocity is: %d\nDistance traversed is: %d\n", v, s);

    return 0;
}

/*

根據題目給的公式進行運算，S加速度的1/2at平方，可以將1/2轉成小數0.5來算

*/