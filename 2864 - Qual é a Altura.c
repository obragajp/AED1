#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        double x_v = (double)-b / (2 * a);
        double altura_maxima = a * x_v * x_v + b * x_v + c;
        printf("%.2lf\n", altura_maxima);
    }
    return 0;
}
