#include <stdio.h>

int main() {
    int Ga1, Gb1, Ga2, Gb2;
    int Ea1, Eb1, Ea2, Eb2;
    scanf("%d %d %d %d", &Ga1, &Gb1, &Ga2, &Gb2);
    scanf("%d %d %d %d", &Ea1, &Eb1, &Ea2, &Eb2);
    int gunnarWins = 0, emmaWins = 0, ties = 0;
    for (int g1 = Ga1; g1 <= Gb1; g1++) {
        for (int g2 = Ga2; g2 <= Gb2; g2++) {
            int gunnarSum = g1 + g2;
            for (int e1 = Ea1; e1 <= Eb1; e1++) {
                for (int e2 = Ea2; e2 <= Eb2; e2++) {
                    int emmaSum = e1 + e2;
                    if (gunnarSum > emmaSum) {
                        gunnarWins++;
                    } else if (emmaSum > gunnarSum) {
                        emmaWins++;
                    } else {
                        ties++;
                    }
                }
            }
        }
    }
    if (gunnarWins > emmaWins) {
        printf("Gunnar\n");
    } else if (emmaWins > gunnarWins) {
        printf("Emma\n");
    } else {
        printf("Tie\n");
    }
    return 0;
}
