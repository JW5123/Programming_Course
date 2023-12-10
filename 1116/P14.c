#include <stdio.h>
int TempConvert(float n, char k) {
    int res;
    if(k == 'F'){
        res = (n * 9) / 5 + 32;
    }
    else if(k == 'C'){
        res = (n - 32) * 5 / 9;
    }
    return res;
}

int main(){

    float n;
    char k;

    scanf("%f %c", &n, &k);

    int res = TempConvert(n, k);
    printf("%d\n", res);

    return 0;
}