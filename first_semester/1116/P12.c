#include <stdio.h>

void SuperDivide(int n, int k) {
    int res = n, cnt = 0;
    printf("%d\n", n);
    while(n != 0){
        res = res / k;
        if(res == 0){
            break;
        }
        cnt++;
        printf("%d\n", res);
    }
}

int main(){

    int n, k;
    scanf("%d %d", &n, &k);

    SuperDivide(n, k);

    return 0;
}