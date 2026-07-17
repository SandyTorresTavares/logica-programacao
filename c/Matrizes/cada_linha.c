#include <stdio.h>

int main() {

    int N;
    int matriz[10][10];

    printf("Qual sera a ordem da matriz? ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMAIOR ELEMENTO DE CADA LINHA:\n");

    for (int i = 0; i < N; i++) {

        int maior = matriz[i][0];

        for (int j = 1; j < N; j++) {

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }

        printf("%d\n", maior);
    }

    return 0;
}