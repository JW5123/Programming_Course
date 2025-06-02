#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char *key[] = {
    "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void clean(char *phone, char *output) {
    int j = 0;
    for (int i = 0; phone[i] != '\0' && j < 7; i++) {
        if (phone[i] >= '0' && phone[i] <= '9') {
            output[j++] = phone[i];
        }
    }
    output[j] = '\0';
}

void combinations(FILE *file, char *number, char *result, int index) {
    if (index == 7) {
        result[7] = '\0';
        fprintf(file, "%s\n", result);
        return;
    }

    int digit = number[index] - '0';
    const char *letters = key[digit];

    for (size_t i = 0; i < strlen(letters); i++) {
        result[index] = letters[i];
        combinations(file, number, result, index + 1);
    }
}

int main() {

    char number[8];
    char result[8];
    char phone[10];

    printf("電話號碼: ");
    scanf("%s", phone);

    clean(phone, number);

    for (int i = 0; i < 7; i++) {
        if (number[i] < '2' || number[i] > '9') {
            printf("數字範圍只能是2 ~ 9\n");
            return 1;
        }
    }

    FILE *file = fopen("words.txt", "w");

    combinations(file, number, result, 0);
    fclose(file);

    printf("資料已寫入words.txt\n");
    return 0;
}
