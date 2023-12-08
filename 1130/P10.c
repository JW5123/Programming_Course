#include <stdio.h>
#include <string.h>

int main(){
    
    int a = 0, b = 0, count = 0;
    int n;
    scanf("%d", &n);

    while(n != 0){
        if(count % 2 == 0){
            a += n % 10;
        }
        else{
            b += n % 10;
        }
        n /= 10;
        count++;
    }
    printf("%d\n", b - a);

    return 0;
}