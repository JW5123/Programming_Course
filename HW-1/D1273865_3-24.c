#include <stdio.h>
#include <math.h>

int main(){

    printf("N\tN^2\tN^3\tN^4\n\n");
    for(int i = 1; i <= 10; i++){
        printf("%d\t%d\t%d\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3), (int)pow(i, 4));
    }

    return 0;
}

/*

用for迴圈將1到10各數字的2次方、3次方、4次方輸出，因為pow函式為double型態，所以用int轉為整數型態，輸出用\t來分隔欄位

*/