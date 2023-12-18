#include <stdio.h>

int main(){

    int num1, num2, cnt, carry;

    while(1){
        cnt = carry = 0;

        scanf("%d %d", &num1, &num2);

        if(num1 == 0 && num2 == 0)
            break;

        while(num1 != 0 || num2 != 0){
            if((num1 % 10) + (num2 % 10) + carry >= 10)
                cnt++, carry = 1;
            else
                carry = 0;

            num1 /= 10;
            num2 /= 10;
        }

        if(cnt == 0)
            printf("No carry operation.\n");
        else if(cnt == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", cnt);
    }

    return 0;
}