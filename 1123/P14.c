#include <stdio.h>
#include <math.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = n; i <= m; i++){
        int s = sqrt(i);
        if(s * s == i)
            printf("%d\n", i);
    }

    return 0;
}