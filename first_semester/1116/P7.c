#include <stdio.h>
int lcm(int n1, int n2){
    int res;
    res = (n1 > n2) ? n1 : n2;

    while(1){
        if(res % n1 == 0 && res % n2 == 0){
            break;
        }
        ++res;
    }
    return res;
}
int main(){

    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int res = lcm(n1, n2);
    printf("%d\n", res);

    return 0;
}