#include <stdio.h>

int i = 0;
void dectoOct(int n, int *c){
    if(n == 0)
        return;
    else{
        c[i] = n % 8;
        i++;
        dectoOct(n / 8, c);
    }
}

int main(){

    int n;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
    scanf("%d", &n);
    int cc[10000];
    if(n == 0){
        printf("0");
    }
    dectoOct(n, cc);
    for(int j = i-1; j >= 0;j--){
        printf("%d", cc[j]);

        switch(cc[j]){
            case 0:
                a++;
                break;
            case 1:
                b++;
                break;
            case 2:
                c++;
                break;
            case 3:
                d++;
                break;
            case 4:
                e++;
                break;
            case 5:
                f++;
                break;
            case 6:
                g++;
                break;
            case 7:
                h++;
                break;
        }
    }
    printf("\n");
    printf("%d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h);

    return 0;
}