#include <stdio.h>

int main(){

    int account, amount, term;
    float rate;
    while (account != 0){
        printf("Eneter account number (-1 to end): ");
        scanf("%d", &account);
        if(account == -1)
            break;
        printf("Enter mortgage amount (in dollars): ");
        scanf("%d", &amount);
        printf("Enter interest term (in years): ");
        scanf("%d", &term);
        printf("Enter interest rate (as a decimal): ");
        scanf("%f", &rate);

        float InterestPayable = amount * term * rate;
        float AmountPayable = InterestPayable + amount;
        int MonthlyPayableInterest = AmountPayable / (term * 12);

        printf("The monthly payable interest $%d\n\n", MonthlyPayableInterest);
    }
    
    return 0;
}

/*

使用while迴圈並設定當account不等於0時則一直持續維持迴圈以利輸入資訊
第一個先輸入帳號，若為-1則直接跳出迴圈結束程式，若不是則既須輸入，第一個輸入為抵押金額，第二個輸入為抵押期限，第三個輸入為利率，
接著先計算應付利息總額，再來是應付總額為應付利息總額加上低押金額，最後為每月應付利息為應付總額除以抵押期限乘於12個月

*/