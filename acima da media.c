#include <stdio.h>
 
int main() {
    int c, n, acima, nota, soma;
    double media, porcentagem;
    scanf("%d", &c);
    for (int i = 0; i < c; i++){
        scanf("%d", &n);
        int notas[n];
        soma = 0;
        acima = 0;
        for (int j = 0; j < n; j++){
            scanf("%d ", &nota);
            notas[j] = nota;
            soma += nota;
        }
        media = (double)soma / n;
        for (int k = 0; k < n; k++){
            if (notas[k] > media){
                acima++;
            }
        }
        porcentagem = ((double)acima / n) * 100;
        printf("%.3lf%%\n", porcentagem);
    }
    
    return 0;
}
