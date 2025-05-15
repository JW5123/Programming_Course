#include <stdio.h>

int money[36];
int best[36];

int getMoney(int n, int base) {
    int total = 0;
    if (n == 0) 
        return money[0];

    while (n > 0) {
        total += money[n % base];
        n /= base;
    }
    return total;
}

int main() {
    
    int T, m, k;
    int min, count, index;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        printf("Case %d:\n", t);

        for (int i = 0; i < 36; i++)
            scanf("%d", &money[i]);

        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &k);
            index = 0;

            min = getMoney(k, 2);
            best[index++] = 2;

            for (int j = 3; j <= 36; j++) {
                count = getMoney(k, j);
                if (count < min) {
                    min = count;
                    index = 0;
                    best[index++] = j;
                } else if (count == min) {
                    best[index++] = j;
                }
            }

            printf("Cheapest base(s) for number %d: ", k);
            for (int j = 0; j < index; j++)
                if(j == index - 1) {
                    printf("%d", best[j]);
                } else {
                    printf("%d ", best[j]);
                } 
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
