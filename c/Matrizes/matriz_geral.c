#include <stdio.h>

int main() {

    int N;
    double matriz[10][10];
    double soma = 0;
    int linha, coluna;

    printf("Qual sera a ordem da matriz? ");
    scanf("%d", &N);

    // Leitura da matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    // a) Soma dos positivos
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (matriz[i][j] > 0) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\nSOMA DOS POSITIVOS: %.1lf\n", soma);

    // b) Linha escolhida
    printf("\nEscolha uma linha: ");
    scanf("%d", &linha);

    printf("LINHA ESCOLHIDA:\n");

    for (int j = 0; j < N; j++) {
        printf("%.1lf ", matriz[linha][j]);
    }

    // c) Coluna escolhida
    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &coluna);

    printf("COLUNA ESCOLHIDA:\n");

    for (int i = 0; i < N; i++) {
        printf("%.1lf ", matriz[i][coluna]);
    }

    // d) Diagonal principal
    printf("\n\nDIAGONAL PRINCIPAL:\n");

    for (int i = 0; i < N; i++) {
        printf("%.1lf ", matriz[i][i]);
    }

    // e) Elevar negativos ao quadrado
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (matriz[i][j] < 0) {
                matriz[i][j] = matriz[i][j] * matriz[i][j];
            }
        }
    }

    printf("\n\nMATRIZ ALTERADA:\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            printf("%.1lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}