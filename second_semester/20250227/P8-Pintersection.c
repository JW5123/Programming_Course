#include <stdio.h>

int main() {

    int n ;

    while(scanf("%d", &n) != EOF) {

        int arr1[n], arr2[n];

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr1[i]);
        }

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr2[i]);
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(arr1[i] == arr2[j]) {
                    printf("%d ", arr1[i]);
                }
            }
        }
        puts("");
    }

    return 0;
}