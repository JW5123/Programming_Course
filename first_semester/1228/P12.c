#include <stdio.h>

int main() {
    
    int n, m;
    scanf("%d %d", &n, &m);

    int arr1[n];
    int arr2[m];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < m; i++){
        scanf("%d", &arr2[i]);
    }

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int result[100];
    int count = 0;

    for (int i = 0; i < size1; ++i) {
        int found = 0;

        for (int j = 0; j < size2; ++j) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            result[count++] = arr1[i];
        }
    }

    for (int i = 0; i < size2; ++i) {
        int found = 0;

        for (int j = 0; j < size1; ++j) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            result[count++] = arr2[i];
        }
    }

    for (int i = 0; i < count; ++i) {
        printf("%d ", result[i]);
    }

    return 0;
}
