#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    while (scanf("%s", str) != EOF) {
        char max = str[0];
        int cnt = 1;
        int curr = 1;

        for(int i = 1; str[i] != '\0'; i++) {
            if(str[i] == str[i - 1]) {
                curr++;
            } else {
                if(curr > cnt) {
                    cnt = curr;
                    max = str[i - 1];
                }
                curr = 1;
            }
        }

        if(curr > cnt) {
            cnt = curr;
            max = str[strlen(str) - 1];
        }
        printf("%c %d\n", max, cnt);
    }
    return 0;
}
