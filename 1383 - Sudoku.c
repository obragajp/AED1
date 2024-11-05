#include <stdio.h>

int checarSolucao (int matriz[9][9]){
    
    for (int i=0;i<9;i++){
        int linha[10] = {0};
        for (int j=0;j<9;j++){
            int x = matriz[i][j];
            if (x > 9 || x < 1 || linha[x] == 1){
                return 0;
            }
            linha[x] =1;
        }
    }

    for (int j=0;j<9;j++){
        int coluna[10] = {0};
        for (int i=0;i<9;i++){
            int y = matriz[i][j];
            if (y > 9 || y < 1 || coluna[y] == 1){
                return 0;
            }
            coluna[y] = 1;
        }
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            int submatriz[10] ={0};
            for (int k=i*3;k<(i+1)*3;k++){
                for (int l=j*3;l<(j+1)*3;l++){
                    int z = matriz[k][l];
                    if (z > 9 || z < 1 || submatriz[z] == 1){
                        return 0;
                    }
                    submatriz[z]=1;
                }
            }
        }
    }
    return 1;
}

int main() {
    int instancia;
    int matriz[9][9];
    scanf("%d", &instancia);
    for (int i=0;i<instancia;i++){
        for (int j=0;j<9;j++){
            for (int k=0;k<9;k++){
                scanf("%d", &matriz[k][j]);
            }
        }
        printf ("Instancia %d\n", i+1);
        if (checarSolucao(matriz)==1){
            printf ("SIM\n\n");
        }
        else{
            printf ("NAO\n\n");
        }
    }
    return 0;
}
