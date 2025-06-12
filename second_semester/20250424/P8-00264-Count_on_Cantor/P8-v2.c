#include <stdio.h>

int main() {
    int t, num, level, x, y;
    while (scanf("%d", &t) != EOF) {
        num = t;
        level = 1;
        while (t > level) {
            t -= level;
            level += 1;
        }

        if (level % 2 == 0) {
            x = 1;
            y = level;
            for (int i = 0; i < t - 1; i++) {
                x += 1;
                y -= 1;
            }
        } else {
            x = level;
            y = 1;
            for (int i = 0; i < t - 1; i++) {
                x -= 1;
                y += 1;
            }
        }

        printf("TERM %d IS %d/%d\n", num, x, y);
    }
    return 0;
}