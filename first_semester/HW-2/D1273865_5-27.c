#include <stdio.h>
#include <math.h>

void quadratic_equation(int a, int b, int c){

    int x1, x2;
    int s = b * b - 4 * a * c;

    if(s > 0){
        x1 = (-b + sqrt(s)) / (2 * a);
        x2 = (-b - sqrt(s)) / (2 * a);
        if(x1 == x2){
            printf("兩相等實數根(重根) : %d\n", x1);
        }
        else{
            printf("兩相異實數根 : %d, %d\n", x1, x2);
        }
    }
    else if(s == 0){
        x1 = -b / (2 * a);
        printf("兩相等實數根(重根) : %d\n", x1);
    }
    else{
        printf("無實數解\n");
    }
}

int main(){

    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        quadratic_equation(a, b, c);
    }

    return 0;
}

/*

建立一元二次方程式無回傳值但有參數的函式，接著依照方程式定理先寫出根的判別式，接著判斷大於0、等於0、小於0的條件，
再依照公式解算出實數根，由於s>0在常數都為0時，兩根還是0，所以又判斷兩根是否相等。
主程式裡利用迴圈不斷輸入係數，並呼叫函式得出結果，直到按下ctrl+c停止程式

*/