#include <stdio.h>

int main() {

    // 建立一個存放月份的指標陣列
    char *months[] = { "January", "February", "March", "April", "May", "June", "July", 
                        "August", "September", "October", "November", "December" };

    int month, day, year;

    scanf("%d/%d/%d", &month, &day, &year); // 輸入原始日期格式

    printf("%s %d, %d\n", months[month - 1], day, year); // 輸出轉換後的日期格式

    return 0;
}