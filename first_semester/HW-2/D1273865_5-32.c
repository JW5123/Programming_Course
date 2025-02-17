#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 1000

void PlayGame(){

    int number = rand() % MAX + 1;
    int guess = 0;
    printf("Guess Number 1 ~ %d\n", MAX);
    while(guess != number){
        printf("=> ");
        scanf("%d", &guess);
        if(guess > number)
            printf("Too high! Try again.\n");
        else if(guess < number)
            printf("Too low! Try again.\n");
        else{
            printf("Excellent! You guessed the number!\n");
            break;
        }
    }
}

int main(){

    srand((unsigned)time(NULL));
    
    int select;
    do {

        system("cls");

        PlayGame();
        printf("Would you like to play again (y or n)? ");
        getchar();
        select = getchar();

    } while(select == 'Y' || select == 'y');

    return 0;
}

/*

建立一個無回傳值的猜數字函式，設定隨機亂數1~1000，接著使用迴圈當猜測數字不等於結果時持續輸入，
當輸入的數大於結果時印出too high，小於結果時顯示too low，等於結果時顯示Exxellent並退出回圈
主程式內先設定亂數種子型別為無號整數，接著使用do while先執行程式，一開始設定system("cls")用以清除畫面，
接著呼叫猜數字函式進行遊戲直到猜對數字後，並詢問是否繼續遊戲，這裡使用getchar()函式用以接收輸入的字元，
最後判斷輸入數字是y還是n，若是y則繼續遊戲，n則退出結束程式

*/