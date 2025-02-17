#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void Eratosthenes(int n){

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for(int i = 2; i * i <= n ; i++){
        if(prime[i] == true){
            for(int j = i * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            printf("%d ", i);
        }
    }
}

int main(){

    Eratosthenes(999);

    return 0;
}