#include <stdio.h>
char toQualityPoints(int n) {
    char s;
    if(100 >= n && n >= 90){
        s = 'A';
    }
    else if(89 >= n && n >= 80){
        s = 'B';
    }
    else if(79 >= n && n >= 70){
        s = 'C';
    }
    else if(69 >= n && n >= 60){
        s = 'D';
    }
    else{
        s = 'E';
    }
    return s;
}
int main(){

    int n;
    scanf("%d", &n);

    char res = toQualityPoints(n);
    printf("%c\n", res);

    return 0;
}
/*
char s;
switch (n){
case 100:
case 90:
    s = 'A';
    break;
case 89:
case 80:
    s = 'B';
    break;
case 79:
case 70:
    s = 'C';
    break;
case 69:
case 60:
    s = 'D';
    break;
default:
    s = 'E';
    break;
}
return s;
*/