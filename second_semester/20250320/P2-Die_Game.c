#include <stdio.h>

int main()
{
    int n;
    char str[10];
    while (scanf("%d", &n) != EOF) {
        if(n == 0) {
            break;
        }
        int up = 1, down = 6, north = 2, east = 4, south = 5, west = 3; 
        while (n--) {
            scanf("%s", str);  
            if (str[0] == 's') {
                south = up;
                up = north;
                down = 7 - up;
                north = 7 - south;
            }
            if (str[0] == 'n') {
                down = north;
                north = up;
                up = 7 - down;
                south = 7 - north;
            }
            if (str[0] == 'w') {
                down = west;
                west = up;
                up = 7 - down;
                east = 7 - west;
            }
            if (str[0] == 'e') {
                east = up;
                up = west;
                down = 7 - up;
                west = 7 - east;
            }
        }
        printf("%d\n", up);
    }
    
    return 0;
}