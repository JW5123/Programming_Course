#include <stdio.h>

int diameter(int r){
    return r + r;
}
int circumference(int r) {
    int pi = 3;
    return r * 2 * pi;
}
int area(int r) {
	int pi = 3;
    return r * r * pi;
}

int main(){

    int n;
    scanf("%d", &n);

    int a = diameter(n);
    int b = circumference(n);
    int c = area(n);

    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}