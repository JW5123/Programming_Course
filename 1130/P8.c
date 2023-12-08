#include <stdio.h>
#include <math.h>

int main(){
    int s, n, i_th;
    double p;
    double q, ans;

    scanf("%d", &s);
    for (int i = 0; i < s; i++){
        scanf("%d %lf %d", &n, &p, &i_th);
        
        if (p == 0){
            ans = 0;
        } else {
            q = 1 - p;
            ans = pow(q, i_th-1) * p / (1 - pow(q, n));  
        }
        printf("%.4f\n", ans);
    }
    return 0;
}