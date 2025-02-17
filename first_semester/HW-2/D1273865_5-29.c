#include <stdio.h>

int GCD(int a, int b){
    return a % b == 0 ? b : GCD(b, a % b);
}

int LCM(int a, int b){
    return a * b / GCD(a, b);
}

int main(){

    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        printf("%d\n", LCM(a, b));
    }

    return 0;
}

/*

最小公倍數需要先算出最大公因數，因此先計算最大公因數後，在利用公式(a * b) / gcd(a, b)求出最小公倍數
最大公因數利用輾轉相除法(遞迴)計算，在傳給LCM函式得出最小公倍數。
主程式利用迴圈不斷輸入兩個數，並呼叫LCM函式計算出結果

*/