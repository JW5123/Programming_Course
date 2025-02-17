#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    printf("%d ", n);
    int num = n, count = 0;
    while(num > 1){
        if(num % 2 == 1){
            num = 3 * num + 1;
        }
        else if(num % 2 == 0){
            num = num / 2;
        }
        count++;
        printf("%d ", num);
    }
    printf("%d", count + 1);

    return 0;
}