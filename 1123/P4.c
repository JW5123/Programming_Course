// UVA10812
#include <stdio.h>
int main(){
    int n, s, d;
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++){
        scanf("%d %d", &s, &d);
        if((s + d) & 1 || s < d)
            printf("impossible\n");
        else
            printf("%d %d\n", (s + d) / 2, (s - d) / 2);
    }
    return 0;
}