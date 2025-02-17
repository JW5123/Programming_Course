#include <stdio.h>
void triangle(int a, int b, int c) {
	if (a + b > c && b + c > a && a + c > b){
        if (a == b && a == c)
            printf("equilateral triangle\n");
        else if (a == b || a == c || b == c)
            printf("Isosceles triangle\n");
        else{
            printf("right triangle\n");
        }
    }
}

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    triangle(a, b, c);

    return 0;
}