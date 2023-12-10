#include <stdio.h>
#include <ctype.h>

char convert(int n, int c) {
	int s = n + 65;
    char r = s;
    if(c == 0){
        return toupper(r);
    }
    return tolower(r);
}

int main(){

    int n, c;
    scanf("%d %d", &n, &c);

    int res = convert(n, c);
    printf("%c\n", res);

    return 0;
}