#include <stdio.h>
#include <string.h>

void bubble_sort(char vetor[][21], int n) {
    int k, j;
    char aux[21];
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (strcmp(vetor[j], vetor[j + 1]) > 0) {
                strcpy(aux, vetor[j]);
                strcpy(vetor[j], vetor[j + 1]);
                strcpy(vetor[j + 1], aux);
            }
        }
    }
}

int main() {
    int n, sorteado, i;
    scanf("%d", &n);
    scanf("%d", &sorteado);
    char nomes[n][21];
    for (i = 0; i < n; i++) {
        scanf("%s", nomes[i]);
    }
    bubble_sort(nomes, n);
    printf("%s\n", nomes[sorteado-1]);
    return 0;
}
