#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_primo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool todos_digitos_sao_primos(int n) {
    while (n > 0) {
        int digito = n % 10;
        if (digito != 2 && digito != 3 && digito != 5 && digito != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        if (is_primo(N)) {
            if (todos_digitos_sao_primos(N)) {
                printf("Super\n");
            } else {
                printf("Primo\n");
            }
        } else {
            printf("Nada\n");
        }
    }
    return 0;
}
