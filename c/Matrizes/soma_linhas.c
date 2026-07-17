    #include <stdio.h>

int main() {

    int M, N;
    double matriz[10][10];
    double somaLinhas[10];

    printf("Quantas linhas tera a matriz? ");
    scanf("%d", &M);

    printf("Quantas colunas tera a matriz? ");
    scanf("%d", &N);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {

            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < M; i++) {

        somaLinhas[i] = 0;

        for (int j = 0; j < N; j++) {
            somaLinhas[i] += matriz[i][j];
        }
    }

    printf("\nVETOR GERADO:\n");

    for (int i = 0; i < M; i++) {
        printf("%.1lf\n", somaLinhas[i]);
    }

    return 0;
}