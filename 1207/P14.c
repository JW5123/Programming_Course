#include <stdio.h>
#include <string.h>
int main(){

    char enc[6], dec[6];
    int disp = 3;
    scanf("%s", enc);

    int i;
    for (i = 0; i < strlen(enc); ++i){

        if (enc[i] <= 'z' && enc[i] >= 'a'){
            dec[i] = (enc[i] - 'a' + 26 - disp) % 26 + 'a';
        }
        else{
            dec[i] = (enc[i] - 'A' + 26 - disp) % 26 + 'A';
        }
    }
    dec[i] = '\0';
    printf("%s\n", dec);
    return 0;
}
