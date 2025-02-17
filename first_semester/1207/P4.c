#include <stdio.h>

int main(){

    int n, t;
    int num1, num2;

    scanf("%d %d", &n, &t);
    int arr[n];

    for(num1 = 0; num1 < n; num1++){
        scanf("%d", &arr[num1]);
    }

    int flag = 0;
    for(num2 = 0; num2 < n; num2++){
        for(num1 = 0; num1 < n; num1++){
            if(num1 < num2){
                if(t == arr[num1] + arr[num2]){
                    flag = 1;
                }
            }
        }
    }
    if(!flag){
        printf("False\n");
    }
    else{
        printf("True\n");
    }


    return 0;
}