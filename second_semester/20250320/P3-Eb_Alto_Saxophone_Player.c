#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char s[1024];
int x;
int v[1000000];
int v_size = 0;

int main() {
    while (scanf("%d", &x) == 1) {
        // consume newline character
        getchar();
        // read and discard next line
        fgets(s, sizeof(s), stdin);
        // read third line
        fgets(s, sizeof(s), stdin);
        // parse input string
        char* token = strtok(s, " ");
        v_size = 0;
        while (token != NULL && v_size < 1000000) {
            v[v_size++] = atoi(token);
            token = strtok(NULL, " ");
        }
        v_size--; // pop_back
        // reverse array
        int left = 0;
        int right = v_size - 1;
        while (left < right) {
            int temp = v[left];
            v[left] = v[right];
            v[right] = temp;
            left++;
            right--;
        }
        long long mul = 1;
        int ans = 0;
        for (int i = 0; i < v_size; i++) {
            ans += v[i] * (i + 1) * mul;
            mul *= x;
        }
        printf("%d\n", ans);
    }
    return 0;
}