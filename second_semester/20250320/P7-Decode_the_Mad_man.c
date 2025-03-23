#include <stdio.h>
#include <ctype.h>
int main() {

    char key[] = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    char c;
    while (scanf("%c", &c) != EOF){
        c = tolower(c);
        if (isspace(c)) 
            printf("%c", c);
        else{
            for (int i = 0; key[i]; i++)
                if (c == key[i]){
                    printf("%c", key[i - 2]);
                    break;
                }
        }
    }
    return 0;
}