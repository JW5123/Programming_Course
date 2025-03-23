#include <stdio.h>
#include <string.h>

void count(char *s, int cnt[]) {
    for (int i = 0; i < strlen(s); ++i) {
        cnt[(int)(s[i] - 'a')]++;
    }
}

int main() {
    char a[1001], b[1001];
    while (fgets(a, sizeof(a), stdin)) {
        
        fgets(b, sizeof(b), stdin);
        
        int cnta[26] = {0}, cntb[26] = {0};
        count(a, cnta);
        count(b, cntb);

        for (int i = 0; i < 26; ++i) {
            int min = (cnta[i] < cntb[i]) ? cnta[i] : cntb[i];
            for (int j = 0; j < min; ++j) {
                printf("%c", (char)(i + 'a'));
            }
        }
        printf("\n");
    }
    return 0;
}