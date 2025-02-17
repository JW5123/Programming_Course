#include <stdio.h>
#include <string.h>

int main()
{
    char ara[100000];
    int x, y, i, l, sum, a, j;
    while (scanf("%s", ara) == 1)
    {
        l = strlen(ara);
        if (l == 1 && ara[0] == '0')
            return 0;
        else
        {
            sum = 0;
            for (i = 0; i < l; i++)
            {
                sum += ara[i] - 48;
            }
            if (sum % 9 == 0)
                x = 0;
            else
                x = 1;
            y = sum;
            if (x == 0)
            {
                j = 1;
                while (y != 9 && y > 9)
                {
                    a = 0;
                    while (y != 0)
                    {
                        a += y % 10;
                        y = y / 10;
                    }
                    y = a;
                    j++;
                }
            }
            if (x == 0)
                printf("%s is a multiple of 9 and has 9-degree %d.\n", ara, j);
            else
                printf("%s is not a multiple of 9.\n", ara);
        }
    }
    return 0;
}