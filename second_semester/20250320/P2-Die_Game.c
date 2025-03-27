#include <stdio.h>

int main()
{
    int n;
    char str[10];
    while (scanf("%d", &n) != EOF) {
        if(n == 0) {
            break;
        }
        int up = 1, north = 2, west = 3, down = 6, south = 5, east = 4;
        while (n--) {
            scanf("%s", str);  
            if (str[0] == 'e') {
                int temp = east;
                east = up;
                up = west;
                west = down;
                down = temp;
            }
            if (str[0] == 's') {
                int temp = south;
                south = up;
                up = north;
                north = down;
                down = temp;
            }
            if (str[0] == 'w') {
                int temp = west;
                west = up;
                up = east;
                east = down;
                down = temp;
            }
            if (str[0] == 'n') {
                int temp = north;
                north = up;
                up = south;
                south = down;
                down = temp;
            }
        }
        printf("%d\n", up);
    }
    
    return 0;
}