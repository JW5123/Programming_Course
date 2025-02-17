#include <stdio.h>

#define ROWS 5
#define COLS 6

int function(int board[ROWS][COLS]) {

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2]) {
                return 1;
            }
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j]) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    
    int arr[ROWS][COLS];

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    if (function(arr)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
