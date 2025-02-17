#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *ptr){
    
    while(*ptr != '\0'){
        *ptr = toupper(*ptr);
        ++ptr;
    }
}

int main(){
    char string[] = "cHaRaCters and $32.98";

    printf("The string before conversion is : %s\n", string);
    convertToUppercase(string);
    printf("The string after conversion is : %s\n", string);
}