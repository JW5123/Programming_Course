#include <stdio.h>
void algorithm(int n) {
	
    int count = 0, num = n;
    printf("%d ", n);
    while(num > 1){
        if(num % 2 == 1){
            num = num * 3 + 1;
        }
        else{
            num /= 2;
        }
        count++;
        printf("%d ", num);
    }
    printf("%d\n", count + 1);
}


int main(){
    
    int n;
    scanf("%d", &n);

    algorithm(n);

    return 0;
}