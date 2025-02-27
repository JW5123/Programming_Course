#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char str[1001] = {0};
    
    while(scanf("%s", str) != EOF) {
        int num[128] = {0};
        
        for(int i = 0; i < strlen(str); i++) {
            num[str[i]]++;
        }

        for(int i = 1; i <= strlen(str); i++){
            for(int j = 128; j >= 32; j--){
                if(num[j] == i){
                    printf("%d %d\n", j, i);
                }
            }
        } 
        puts("");
    }
    
    return 0;
}
