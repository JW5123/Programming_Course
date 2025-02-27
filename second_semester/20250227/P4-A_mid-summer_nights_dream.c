#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
int main() {

    int arr[1000001];
    int n;

    while(scanf("%d", &n) != EOF) {
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), cmp);

        int mid1 = arr[(n - 1) / 2];
        int mid2 = arr[n / 2];
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            if(arr[i] == mid1 || arr[i] == mid2) {
                cnt++;
            }
        }

        printf("%d\n", mid1);
        printf("%d\n", mid2);

        printf("%d %d %d\n", mid1, cnt, mid2 - mid1 + 1);
    }

    return 0;
}