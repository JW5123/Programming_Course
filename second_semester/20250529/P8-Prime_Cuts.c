#include <stdio.h>
#include <math.h>
#define MAX 1000

int isPrime[MAX + 1];
int primes[MAX];
int prime_count = 0;

void Eratosthenes() {
    for (int i = 0; i <= MAX; ++i)
        isPrime[i] = 1;

    isPrime[0] = 0;
    isPrime[1] = 1;

    for (int i = 2; i <= sqrt(MAX); ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                isPrime[j] = 0;
        }
    }

    for (int i = 1; i <= MAX; ++i) {
        if (isPrime[i])
            primes[prime_count++] = i;
    }
}

int main() {
    int N, C;
    Eratosthenes();

    while (scanf("%d %d", &N, &C) == 2) {
        int list[MAX], count = 0;

        for (int i = 0; i < prime_count && primes[i] <= N; ++i)
            list[count++] = primes[i];

        printf("%d %d:", N, C);

        int output_count;

        if (count % 2 == 0) {
            output_count = 2 * C;
        } else {
            output_count = 2 * C - 1;
        }
        if (output_count > count) {
            output_count = count;
        }

        int start = (count - output_count) / 2;

        for (int i = start; i < start + output_count; ++i)
            printf(" %d", list[i]);

        printf("\n\n");
    }

    return 0;
}
