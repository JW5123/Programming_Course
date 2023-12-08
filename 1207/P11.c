#include <stdio.h>
#include <string.h>

void reverse(char *str){
        int i, j;
        char temp;

        j = strlen(str) - 1;
        for(i = 0; i < j; i++){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                j--;
        }
}

int main(){
        
    char s[20];

    gets(s);
    reverse(s);
    printf("%s", s);

    return 0;
}