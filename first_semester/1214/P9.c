#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        
        int arr[3001] = {0}, check[3001] = {0};
        int flag = 1;
        for(int i = 1; i <= n; i++)
            scanf("%d", &arr[i]);
        for(int i = 1; i <= n - 1; i++)
            check[abs(arr[i] - arr[i + 1])] = 1;
        for(int i = 1; i <= n - 1; i++)
            if(check[i] == 0)
                flag = 0;
        flag == 1 ? printf("Jolly\n") : printf("Not jolly\n");
    }
    return 0;
}