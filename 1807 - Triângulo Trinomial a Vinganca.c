#include <stdio.h>

#define MODULO 2147483647

long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return result;
}

int main() {
    long long R;
    while (scanf("%lld", &R) != EOF) {
        printf("%lld\n", mod_exp(3, R, MODULO));
    }
    return 0;
}
