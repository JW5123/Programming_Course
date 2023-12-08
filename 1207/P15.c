#include <stdio.h>
#include <string.h>

int main(){

    char s[16];

    scanf("%s", s);

    int len=strlen(s);
    if(s[len-1]=='c'){
        printf("yes");
    }else{
        printf("no");
    }

    return 0;
}