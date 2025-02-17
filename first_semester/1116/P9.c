#include <stdio.h>

void convert(int n, int c) {
    if(c == 2){
        int num = n;
        for(int j = 7; j >= 0; --j){
            printf("%d", (num >> j) & 1);
        }
        printf("\n");
    }
    else if(c == 8){
        printf("%o\n", n);
    }
    else if(c == 16){
        printf("%x\n", n);
    }
}

int main(){

    int n, c;
    scanf("%d %d", &n, &c);

    convert(n, c);

    return 0;
}