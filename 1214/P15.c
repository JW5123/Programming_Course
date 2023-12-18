// !!!!!!
#include <string.h>
#include <stdio.h>
#define N 100

void print_num(int a[], int n){

    int i = n - 1;
    while (a[i] == 0)
        --i;
    for (; i >= 0; i--)
        printf("%d", a[i]);
}
void plus(int num1[], int num2[], int n){

    for (int i = 0, up = 0; i < n; i++){

        int temp = num1[i] + num2[i] + up;
        num1[i] = temp % 10;
        up = temp / 10;
    }
    print_num(num1, n);
}
int main()
{
    char buffer1[N];
    char buffer2[N];
    scanf("%s %s", buffer1, buffer2);
    
    int num1[N] = {0};
    int num2[N] = {0};

    long long n = N;
    for (int i = 0, temp = (int)strlen(buffer1) - 1; temp >= 0; temp--)
        num1[i++] = buffer1[temp] - '0';
    for (int i = 0, temp = (int)strlen(buffer2) - 1; temp >= 0; temp--)
        num2[i++] = buffer2[temp] - '0';

    plus(num1, num2, n);
    printf("\n");
}