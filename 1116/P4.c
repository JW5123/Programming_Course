#include <stdio.h>
void print_rectangle(int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1){
                printf("*");
            }
            else if(j == 0 || j == n - 1){
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void print_trangle(int m) {
	for(int i = 0; i < m; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}


int main(){

    int n, m;

    scanf("%d %d", &n, &m);
    print_rectangle(n);
    print_trangle(m);

    return 0;
}