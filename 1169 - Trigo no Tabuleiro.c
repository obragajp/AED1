#include <stdio.h>

int trigo(){
    int casas, j;
    unsigned long long int graos = 1;
    unsigned long long int kg;
    scanf("%d", &casas);
    for (j = 0; j < casas; j++){
        graos = graos * 2;
    }
    kg = graos / 12000;
    if (j==64){
        kg = 1537228672809129;
    }
    printf("%llu kg\n", kg);       
    return 0;
}
 
int main() {
    int testes, i;
    scanf("%d", &testes);
    for (i = 0; i < testes; i++){
        trigo();
    }
    return 0;
}
