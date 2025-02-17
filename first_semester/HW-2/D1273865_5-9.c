#include <stdio.h>

double calculateCharges(const int rentHours) {

    double charge = rentHours * 0.5;

    if(rentHours >= 24){
        int days = rentHours / 24;
        if (rentHours % 24 > 0) {
            days += 1;
        }
        charge += days * 50.0;
    } 
    else{
        charge += 25.00;
        int additional_charge = rentHours - 8;
        if(additional_charge > 0){
            charge += additional_charge * 5.0;
        }
    }

    return charge;
}

int main() {

    int n = 3, i = 1;
    int hoursCustomer[n], hoursSum = 0;
    double customerCharge, chargeSum = 0;

    while(1){
        printf("Enter hours for Customer %d: ", i);
        scanf("%d", &hoursCustomer[i]);
        if(hoursCustomer[i] <= 0){
            printf("Rent hours should be greater than 0 !!!\n\n");
            continue;
        }
        if(i == n)
            break;
        i++;
    }

    printf("\n%-9s%-11s%s\n", "Car", "Hours", "Charge");
    for(int i = 1; i <= n; i++){
        customerCharge = calculateCharges(hoursCustomer[i]);
        chargeSum += customerCharge;
        hoursSum += hoursCustomer[i];

        printf("%-10d%-4d%12.2lf\n", i, hoursCustomer[i], customerCharge);
    }
    printf("%-10s%-4d%12.2lf\n", "Total", hoursSum, chargeSum);

    return 0;
}

/*

建立一個浮點數型態的收費函式，根據題目需求先將租用時間乘上0.5的服務稅。
判斷租用時間是否超過24小時，若是則先計算服務稅在計算租用天數，並判斷是否有未達一天，否則天數加1，並將每日最高50美元租金加到總費用中。
若是小於24小時先將基本租金25美元加到總費用中，並計算超過8小時的額外租金，將額外租金乘上5.0加到總費用中，最後回傳總費用

主程式利用陣列方式儲存輸入的資料，並加入判斷租用時間是否小於等於0的機制，若是則重新輸入，否則繼續輸入直到要輸入的總數後跳出迴圈輸出結果

*/