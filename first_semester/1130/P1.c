#include <stdio.h>

int prime(int n, int m){
    for(int i = 2; i < n; i++){
        if(n % i == 0 && m % i == 0)
            return 0;
    }
    return 1;
}

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    if(prime(n, m)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }

    return 0;
}