#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    while (scanf("%s", str) != EOF) {
        
        char maxChar = str[0];
        int maxCount = 1;
        int currCount = 1;

        for(int i = 1; str[i] != '\0'; i++) {
            if(str[i] == str[i - 1]) {
                currCount++;
                if(currCount > maxCount) {
                    maxCount = currCount;
                    maxChar = str[i];
                }
            } else {
                currCount = 1;
            }
        }
        printf("%c %d\n", maxChar, maxCount);
    }
    return 0;
}
