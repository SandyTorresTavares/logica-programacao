#include <stdio.h>

int main() {

    int M, N;
    int matriz[10][10];

    printf("Quantas linhas tera a matriz? ");
    scanf("%d", &M);

    printf("Quantas colunas tera a matriz? ");
    scanf("%d", &N);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {

            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nNUMEROS NEGATIVOS:\n");

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {

            if (matriz[i][j] < 0) {
                printf("%d\n", matriz[i][j]);
            }
        }
    }

    return 0;
}