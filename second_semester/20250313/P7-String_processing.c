#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int t;
    scanf("%d", &t);

    char str[t][1001];
    char num[100] = "";

    for(int i = 0; i < t; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
        strtok(str[i], "\n");
    }
    return 0;
}