#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num == 2) {
        return 1;
    }
    if (num % 2 == 0) {
        return 0;
    }
    int limit = sqrt(num);
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        int X;
        scanf("%d", &X);
        if (isPrime(X)) {
            printf("Prime\n");
        } 
        else {
            printf("Not Prime\n");
        }
    }
    
    return 0;
}
