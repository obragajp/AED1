#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int const TAM = 400000;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    clock_t t;
    int vetor[TAM];

    srand((unsigned)time(NULL));

    for (int a = 0; a < TAM; a++)
        vetor[a] = rand() % TAM;

    t = clock();
    quickSort(vetor, 0, TAM - 1);
    t = clock() - t;

    printf("Tempo de execução: %lf ms\n", ((double)t) / (CLOCKS_PER_SEC));

    return 0;
}
