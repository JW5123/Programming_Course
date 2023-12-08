#include <stdio.h>

int a = 0, b = 0, c = 0;
void amount(int n){
    
    if(n % 3 == 0){
        a++;
    }
    else if(n % 3 == 1){
        b++;
    }
    else if(n % 3 == 2){
        c++;
    }
}

int main(){

    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        amount(n);
    }
    printf("%d %d %d\n", a, b, c);

    return 0;
}