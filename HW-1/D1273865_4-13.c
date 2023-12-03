#include <stdio.h>

int main(){

    int inp;

    printf("Enter natural numbers : ");
    scanf("%d", &inp);

    int sum = 0, square = 0, cubes = 0;
    for(int num = 1; num <= inp; num++){
        sum += num;
        square += num * num;
        cubes += num * num * num;
    }
    printf("The sum : %d\n", sum);
    printf("The sum of the squares : %d\n", square);
    printf("The sum of the cubes : %d\n", cubes);

    return 0;
}

/*

先設變數inp作為輸入自然數儲存用，設變數sum為0、square為0、cubes為0個儲存總和、平方和及立方和，
用for迴圈執行1到inp，接著對這之間的數進行加總、平方及立方總和運算，最後輸出三個的結果

*/