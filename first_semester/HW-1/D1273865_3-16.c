#include <stdio.h>

int main(){

    int totalAmount;

    while (totalAmount != 0){

        printf("Enter total amount (-1 to quit): ");
        scanf("%d", &totalAmount);
        if(totalAmount == -1)
            break;
        float total = (float)totalAmount;
        float countySalesTax = total * 0.05;
        float stateSalesTax = total * 0.04;
        float totalSales = countySalesTax + stateSalesTax;
        float sales = totalAmount - totalSales;

        printf("Total Collections: $%.2f\n", total);
        printf("State Sales Tax: $%.2f\n", stateSalesTax);
        printf("County Sales Tax: $%.2f\n", countySalesTax);
        printf("Total Sales Tax Collected: $%.2f\n", totalSales);
        printf("Sales: $%.2f\n", sales);
    }
    
    return 0;
}

/*

根據課本題目輸入總收入，第一個直接印出總收入結果，第二個州政府營業稅為4%故乘於0.04，
第三個郡政府營業稅為5%故乘於0.05，銷售稅總額為州及郡政府稅的加總，銷售為總收入扣掉銷售總稅，
每個結果輸出都到小數點後兩位

*/