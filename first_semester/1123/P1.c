#include <stdio.h>

void calculate(int y, int m, int d){

    if(m == 1 || m == 2){
        m += 12;
        y--;
    }
    int week = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    switch(week){
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Friday\n");
            break;
        case 5:
            printf("Saturday\n");
            break;
        case 6:
            printf("Sunday\n");
            break;
    }
}

int main(){

    int t;
    int m, d;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &m, &d);
        calculate(2011, m, d);
    }

    return 0;
}