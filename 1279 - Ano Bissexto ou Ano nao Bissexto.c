#include <stdio.h>
#include <string.h>

int bissexto(const char *ano) {
    int length = strlen(ano);
    int remainder = 0;
    for (int i = 0; i < length; i++) {
        remainder = (remainder * 10 + (ano[i] - '0')) % 4;
    }
    if (remainder != 0) return 0;
    remainder = 0;
    for (int i = 0; i < length; i++) {
        remainder = (remainder * 10 + (ano[i] - '0')) % 100;
    }
    if (remainder == 0) {
        remainder = 0;
        for (int i = 0; i < length; i++) {
            remainder = (remainder * 10 + (ano[i] - '0')) % 400;
        }
        if (remainder == 0) return 1;
        return 0;
    }
    return 1;
}

int huluculu(const char *ano) {
    int length = strlen(ano);
    int remainder = 0;
    for (int i = 0; i < length; i++) {
        remainder = (remainder * 10 + (ano[i] - '0')) % 15;
    }
    return remainder == 0;
}

int bulukulu(const char *ano) {
    int length = strlen(ano);
    int remainder = 0;

    for (int i = 0; i < length; i++) {
        remainder = (remainder * 10 + (ano[i] - '0')) % 55;
    }
    return remainder == 0;
}

int main() {
    char ano[10000];
    int primeiro = 1;
    
    while (scanf("%9999s", ano) != EOF) {
        if (primeiro == 0) {
            printf("\n");
        }
        primeiro = 0;
        if (bissexto(ano)) {
            printf("This is leap year.\n");
            if (huluculu(ano)) {
                printf("This is huluculu festival year.\n");
            }
            if (bulukulu(ano)) {
                printf("This is bulukulu festival year.\n");
            }
        } else {
            if (huluculu(ano)) {
                printf("This is huluculu festival year.\n");
            } else {
                printf("This is an ordinary year.\n");
            }
        }
    }

    return 0;
}
