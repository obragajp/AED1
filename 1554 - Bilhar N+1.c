#include <stdio.h>
#include <math.h>

double calcular_distancia(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    int casos, bolas, cont;
    double x1, y1, x2, y2, atual, menor;
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++) {
        scanf("%d", &bolas);
        scanf("%lf %lf", &x1, &y1);
        menor = -1;
        cont = 0;
        for (int j = 0; j < bolas; j++) {
            scanf("%lf %lf", &x2, &y2);
            atual = calcular_distancia(x1, y1, x2, y2);
            if (menor == -1 || atual < menor) {
                menor = atual;
                cont = j + 1;
            }
        }
        printf("%d\n", cont);
    }
    return 0;
}
