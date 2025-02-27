#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n--){
        int N, P, h;
        
        scanf("%d %d", &N, &P);
        
        int arr[N + 1], total = 0;
        memset(arr, 0, sizeof(arr));
        
        for (int j = 0; j < P; j++) {
            scanf("%d", &h);
            
            for (int k = h; k <= N; k += h) {
                if (k % 7 == 6 || k % 7 == 0)
                    continue;
                
                if (arr[k] == 0) {
                    total++;
                    arr[k] = 1;
                }
            }
        }
		
		printf("%d\n", total);
	}
}