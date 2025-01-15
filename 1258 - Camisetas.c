#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char cor[10];
    char tamanho;
} Camiseta;

int comparar(const Camiseta *a, const Camiseta *b) {
    int corCompare = strcmp(a->cor, b->cor);
    if (corCompare != 0) return corCompare;
    if (a->tamanho != b->tamanho) {
        return (b->tamanho - a->tamanho);
    }
    return strcmp(a->nome, b->nome);
}

void ordenar(Camiseta camisetas[], int N) {
    for (int i = 1; i < N; i++) {
        Camiseta chave = camisetas[i];
        int j = i - 1;
        while (j >= 0 && comparar(&chave, &camisetas[j]) < 0) {
            camisetas[j + 1] = camisetas[j];
            j--;
        }
        camisetas[j + 1] = chave;
    }
}

int main() {
    int N;
    int primeiroCaso = 1;
    while (1) {
        scanf("%d", &N);
        if (N == 0) {
            break;
        }
        Camiseta camisetas[N];
        for (int i = 0; i < N; i++) {
            getchar();
            scanf("%[^\n]", camisetas[i].nome);
            scanf("%s %c", camisetas[i].cor, &camisetas[i].tamanho);
        }
        ordenar(camisetas, N);
        if (!primeiroCaso) {
            printf("\n");
        }
        primeiroCaso = 0;
        for (int i = 0; i < N; i++) {
            printf("%s %c %s\n", camisetas[i].cor, camisetas[i].tamanho, camisetas[i].nome);
        }
    }
    return 0;
}
