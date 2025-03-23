#include <stdio.h>
#include <string.h>

int mp[14][11] = {
    {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1},
    {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0},
    {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0}
};

char keys[14] = {'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C', 'D', 'E', 'F', 'G', 'A', 'B'};

int main() {

    int t;
    char str[100];

    scanf("%d", &t);
    getchar();

    while(t--) {
        fgets(str, sizeof(str), stdin);
        strtok(str, "\n");

        int count[11] = {0};
        int flag[11] = {0};

        for(int i = 0; str[i] != '\0'; i++) {
            int index = -1;
            for(int j = 0; j < 14; j++) {
                if(str[i] == keys[j]) {
                    index = j;
                    break;
                }
            }
            if(index != -1) {
                for(int k = 1; k <= 10; k++) {
                    if(mp[index][k]) {
                        if(flag[k]) {
                            continue;
                        } else {
                            flag[k] = 1;
                            count[k]++;
                        }
                    } else {
                        flag[k] = 0;
                    }
                }
            }
        }

        for(int i = 1; i <= 10; i++) {
            if(i != 1) {
                printf(" ");
            }
            printf("%d", count[i]);
        }
        printf("\n");
    }

    return 0;
}