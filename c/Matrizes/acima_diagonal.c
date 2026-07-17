#include <stdio.h>

int main() {

    int N;
    int matriz[10][10];
    int soma = 0;

    printf("Qual sera a ordem da matriz? ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (j > i) {
                soma += matriz[i][j];
            }
        }
    }

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL = %d\n", soma);

    return 0;
}