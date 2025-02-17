#include <stdio.h>

int main(){

    int H, M, S;
    int totalTime;

    scanf("%d", &totalTime);
    
    H = totalTime / 3600;
    M = (totalTime % 3600) / 60;
    S = totalTime % 60;

    printf("%dh:%dm:%ds\n", H, M, S);

    return 0;
}

/*

根據題目給的總秒數，小時部分除以3600(1小時3600秒)以得到時，
分鐘部分先除以3600後取餘數，再將餘數除以60得到分，
秒數部分除以60後取餘數即為秒

*/