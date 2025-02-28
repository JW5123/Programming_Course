#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    
    while(fgets(str, sizeof(str), stdin)) {
        
        int upper = 0, lower = 0, digit = 0, special = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            if (isupper(str[i])) 
                upper = 1;
            else if (islower(str[i])) 
                lower = 1;
            else if (isdigit(str[i])) 
                digit = 1;
            else if (ispunct(str[i])) 
                special = 1;
        }

        if (upper && lower && digit && special) {
            printf("The password strength is high.\n");
        } else if (upper && lower && digit) {
            printf("The password strength is medium.\n");
        } else if (lower && digit) {
            printf("The password strength is low.\n");
        } else {
            printf("The password strength is very low.\n");
        }
    }
    return 0;
}
