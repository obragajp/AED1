#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_strings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    while (n--) {
        char *itens[1000];
        int count = 0;
        char linha[1000 * 21];
        fgets(linha, sizeof(linha), stdin); 
        char *token = strtok(linha, " \n"); 
        while (token != NULL) {
            int existe = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(itens[i], token) == 0) {
                    existe = 1;
                    break;
                }
            }
            if (!existe) {
                itens[count] = malloc(strlen(token) + 1);
                strcpy(itens[count], token);
                count++;
            }
            token = strtok(NULL, " \n");
        }
        qsort(itens, count, sizeof(char *), compare_strings);
        for (int i = 0; i < count; i++) {
            printf("%s", itens[i]);
            free(itens[i]);
            if (i < count - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
