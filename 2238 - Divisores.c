#include <stdio.h>
#include <math.h>

int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    long long menor = -1;
    for (long long n = 1; n * n <= C; n++) {
        if (C % n == 0) {
            if (n % A == 0 && n % B != 0 && D % n != 0) {
                if (menor == -1 || n < menor) {
                    menor = n;
                }
            }
            long long div = C / n;
            if (div != n) {
                if (div % A == 0 && div % B != 0 && D % div != 0) {
                    if (menor == -1 || div < menor) {
                        menor = div;
                    }
                }
            }
        }
    }
    printf("%lld\n", menor);
    return 0;
}
