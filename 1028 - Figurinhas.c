#include <stdio.h>

long long int mdc(long long int f1, long long int f2){
    long long int resto;
    while (f2 != 0){
        resto = f1 % f2;
        f1 = f2;
        f2 = resto;
    }
    return f1;
}

int main() {
    long long int n, f1, f2;
    scanf("%lld", &n);
    while(n-- > 0){
        scanf("%lld %lld", &f1, &f2);
        long long int resultado = mdc(f1, f2);
        printf("%lld\n", resultado);
        }
    return 0;
}
