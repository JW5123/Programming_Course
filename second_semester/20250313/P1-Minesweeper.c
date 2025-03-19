#include <stdio.h>
#include <string.h>

int main() {
    int n, m, cases = 0;
    char ch;
    int arr[102][102];

    while(scanf("%d %d", &n, &m)) {
        if(n == 0 && m == 0)
            break;
        memset(arr, 0, sizeof(arr));
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= m; ++j) {
                scanf(" %c", &ch);
                if(ch == '*') {
                    arr[i][j] = -10;
                    for(int x = i - 1; x <= i + 1; ++x)
                        for(int y = j - 1; y <= j + 1; ++y)
                            arr[x][y]++;
                }
            }
        }
        if(cases) 
            printf("\n");
        printf("Field #%d:\n", ++cases);
        
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= m; ++j) {
                if(arr[i][j] < 0) 
                    printf("*");
                else 
                    printf("%d", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
