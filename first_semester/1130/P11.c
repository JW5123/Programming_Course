#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    for(int i = 0; n > 0; i++){
        if(n % 2 == 1){
            printf("%d ", i);
        }
        n /= 2;
    }    

    return 0;
}