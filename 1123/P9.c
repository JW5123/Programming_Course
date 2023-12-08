#include <stdio.h>

int main(){

    int num, arr[100], i = 0, m = 0;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

    char hex[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

    scanf("%d",&num);

    while(num > 0){
        arr[i++] = num % 16;
        num /= 16;
    }

    for(i = i - 1; i >= 0; i--){
        m = arr[i];
        printf("%c",hex[m]);

        switch(hex[m]){
            case 'a':
                a++;
                break;
            case 'b':
                b++;
                break;
            case 'c':
                c++;
                break;
            case 'd':
                d++;
                break;
            case 'e':
                e++;
                break;
            case 'f':
                f++;
                break;
        }
    }
    printf("\n");
    printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);

    return 0;
}