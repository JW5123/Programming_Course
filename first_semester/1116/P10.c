#include <stdio.h>
int add(int a, int b) {
    printf("%d+%d=%d\n", a, b, a + b);
    return a + b;
}
int sub(int a, int b) {
    printf("%d-%d=%d\n", a, b, a - b);
    return a - b;
}
int multiply(int a, int b) {
    printf("%d*%d=%d\n", a, b, a * b);
    return a * b;
}
int divide(int a, int b) {
    printf("%d/%d=%d\n", a, b, a / b);
    return a / b;
}
void star(int n) {
    for(int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    
    int a, b;
    scanf("%d %d", &a, &b);

    int n1 = add(a, b);
    star(n1);
    int n2 = sub(a, b);
    star(n2);
    int n3 = multiply(a, b);
    star(n3);
    int n4 = divide(a, b);
    star(n4);

    return 0;
}