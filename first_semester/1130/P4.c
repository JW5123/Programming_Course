#include <stdio.h>

int main(){

    double q;
    int c, a, b;
    scanf("%d %d %d", &c, &a, &b);
    int x1 = 1, x2 = 0, x3 = 26, y1 = 0, y2 = 1, y3 = a;
    int answer;
    double t1, t2, t3;

    while(1){
        if(y3 == 0){
            break;
        }
        if(y3 == 1){
            if(y2 < 0){
                y2 += 26;
            }
            answer = y2;
            break;
        }
        q = x3 / y3;
        t1 = x1 - q * y1;
        t2 = x2 - q * y2;
        t3 = x3 - q * y3;
        x1 = y1;
        x2 = y2;
        x3 = y3;
        y1 = t1;
        y2 = t2;
        y3 = t3;
    }
    int d = (answer * (c - b)) % 26;
    if(d < 0)
        d += 26;
    printf("%d", d);

    return 0;
}