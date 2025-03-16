#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 15

// 先建立快速排序需要用到的比較函式
int compare(const void *a, const void *b) {
    // 使用內建strcmp函式進行比較大小，原始寫法為 *(char*)a - *(char*)b
    return strcmp((char *)a, (char *)b);
}

int main() {

    // 建立一個存放所有城市的陣列
    char str[SIZE][20] = {"Keelung", "Taipei", "Taoyuan", "Hsinchu", "Miaoli", "Taichung", "Changhua", "Nantou", "Yunlin",
                            "Chiayi", "Tainan", "Kaohsiung", "Pingtung", "Yilan", "Hualien"};
    
    printf("Before sorting:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\n", str[i]); // 輸出排序前的內容
    }

    qsort(str, SIZE, sizeof(str[0]), compare); // 呼叫C語言內建qsort函式進行排序
    
    printf("\nAfter sorting:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\n", str[i]); // 輸出排序後的結果
    }

    return 0;
}