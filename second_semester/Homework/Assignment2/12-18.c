#include <stdio.h>

int isDuplicate(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) 
            return 1;
    }
    return 0;
}

int main() {
    int value;
    int nums[100];
    int count;

    while (1) {
        count = 0;
        printf("輸入: ");
        while (scanf("%d", &value) == 1) {
            if (!isDuplicate(nums, count, value)) {
                nums[count++] = value;
            }
            int ch = getchar();
            if (ch == '\n' || ch == EOF) 
                break;
        }
        if (feof(stdin)) 
            break;
        
        printf("輸入的整數共有 %d 個\n", count);
        printf("去除重複後: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", nums[i]);
        }
        printf("\n\n");
    }
    printf("\n程式結束\n");

    return 0;
}

