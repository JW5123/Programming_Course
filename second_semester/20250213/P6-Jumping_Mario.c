#include <stdio.h>
int main(){

    int T, N, H;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%d", &N);
        int cur = -1, high = 0, low = 0;
        for(int j = 0; j < N; j++){
            scanf("%d", &H);
            if(cur >= 0){
                if(H > cur){
                    high++;
                }
                else if(H < cur){
                    low++;
                }
            }
            cur = H;
        }
        printf("Case %d: %d %d\n", i, high, low);
    }
    return 0;
}