#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TIME 100

int flip(){
    return rand() % 2;
}

int main(){

    srand(time(NULL));
    int front = 0, back = 0;

    for(int i = 1; i <= 100; i++){
        if(flip() == 1){
            front++;
        }
        else{
            back++;
        }
    }
    printf("正面出現 %d 次\n反面出現 %d 次\n", front, back);

    return 0;
}

/*

建立flip函式，使用rand()產生0到1之間的亂數，主程式內使用srand()讓每次的正反面次數都不同，並計算正反面個出現幾次。
原則上每次執行都非常接近正反的一半也就是50

*/