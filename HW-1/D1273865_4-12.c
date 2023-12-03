#include <stdio.h>

int is_prime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main(){

    for(int i = 2; i <= 100; i++){
        if(is_prime(i))
            printf("%d ", i);
    }
    return 0;
}

/*

設is_prime函式，並設參數為整數n，用for迴圈從2循環到n，在判斷輸入數除以之間每個各數是否整除，若是則回傳0，否則回傳1。
主程式用for迴圈從2循環到100，在呼叫is_prime函式判斷，最後將是質數的數輸出

*/


/*
int inp;
scanf("%d", &inp);

int num;
for(num = 2; num < inp && inp % num != 0; num++);

if(num == inp){
    printf("true\n");
}
else{
    printf("false\n");
}
*/