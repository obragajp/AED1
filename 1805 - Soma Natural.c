#include <stdio.h>

long long soma_intervalo(int A, int B) {
    long long soma_b = (long long) B * (B + 1) / 2;
    long long soma_a_1 = (long long) (A - 1) * A / 2;
    return soma_b - soma_a_1;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%lld\n", soma_intervalo(A, B));
    return 0;
}
