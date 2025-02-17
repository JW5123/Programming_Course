#include <stdio.h>

void printCharacters(const char *ptr){

    for(; *ptr != '\0'; ++ptr){
        printf("%c", *ptr);
    }
}

int main(){

    char string[] = "print characters of a string";

    printf("The string is : \n");
    printCharacters(string);
    printf("\n");

    return 0;
}