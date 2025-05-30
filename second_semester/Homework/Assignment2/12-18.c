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

/*

效能比較（陣列 vs. 二元搜尋樹）
方法	插入時間	搜尋時間	空間使用	優點	缺點
陣列	O(1)	O(n)	O(n)	簡單易懂、實作容易	對大資料量效率差
BST	O(log n)（平均）	O(log n)（平均）	O(n)	對大量資料效率較好、支援排序	若未平衡則退化成 O(n) 的鏈

陣列適合小量資料，因為重複判斷要 線性掃描（O(n))。

二元搜尋樹可以快速插入與查找，平均時間為 O(log n)，若使用 平衡 BST（如 AVL 或紅黑樹），效率更穩定。

若只是去重 + 不需排序，可以使用 哈希表（Hash Table），時間為 O(1)，但 C 需額外實作或用庫。

*/