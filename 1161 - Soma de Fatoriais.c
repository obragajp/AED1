#include <stdio.h>

long long fatorial(int numero){
    if (numero<=1){
        return 1;
    }
    return numero * fatorial(numero-1);
}

int main() {
    int m, n;
    while (scanf("%d %d", &m, &n) != EOF) {
        long long soma;
        soma = fatorial(m) + fatorial(n);
        printf("%lld\n", soma);
    }
    return 0;
}
