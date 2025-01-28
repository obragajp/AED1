#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n, a, b, mcm;
    int contadorA, contadorB, contadorMCM, soma;

    while (1) {
        scanf("%d %d %d", &n, &a, &b);
        if (n == 0 && a == 0 && b == 0) {
            break;
        }
        contadorA = n / a;
        contadorB = n / b;
        mcm = (a * b) / mdc(a, b);
        contadorMCM = n / mcm;
        soma = contadorA + contadorB - contadorMCM;
        printf("%d\n", soma);
    }
    return 0;
}
