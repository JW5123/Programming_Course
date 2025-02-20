#include <stdio.h>

int main() {

    char s;
    int count = 0;
    while((s = getchar()) != EOF) {
        if(s == '"') {
            count++;
            if(count % 2 == 1) {
                printf("``");
            } else {
                printf("''");
            }
        } else {
            printf("%c", s);
        }
    }

    return 0;
}