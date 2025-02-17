#include <stdio.h>

int main(){

    float sale;
    
    while(sale != 0){
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sale);
        if(sale == -1)
            break;
        printf("Salary is: $%.2f\n", 200 + sale * 0.09);
    }

    return 0;
}

/*

利用迴圈while，當變數不等於0時則持續執行，接著輸入一週銷售金額，
若輸入為-1時則退出迴圈結束程式，否則輸出銷售員的一週的收入

*/