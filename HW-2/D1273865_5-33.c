#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void PlayGame(){

    int number = rand() % MAX + 1;
    int guess = 0, t = 0;
    printf("Guess Number 1 ~ %d\n", MAX);
    while(guess != number){
        printf("=> ");
        scanf("%d", &guess);
        if(guess > number){
            printf("Too high! Try again.\n");
            t++;
        }
        else if(guess < number){
            printf("Too low! Try again.\n");
            t++;
        }
        else{
            printf("Excellent! You guessed the number!\n");
            t++;
            break;
        }
        printf("times: %d\n", t);
    }
    if(t <= 10){
        printf("Either you know the secret or yougot lucky!\n");
    }
    else if(t > 10){
        printf("You should be able to do better!\n");
    }
    else{
        printf("Ahah! You know the secret!\n");
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

