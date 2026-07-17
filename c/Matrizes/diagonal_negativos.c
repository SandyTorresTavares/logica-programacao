#include <stdio.h>
int main() {
    int N, negativos = 0; 

    printf("Qual sera a ordem da matriz?\n");
    scanf("%d", &N);

    int matriz[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
           printf("Elemento [%d, %d]:\n", i, j);
           scanf("%d", &matriz[i][j]);
        }
    }
    printf("Diagonal Principal:\n");

    for (int i = 0; i < N; i++) {
        printf("%d ", matriz[i][i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz [i][j] < 0) {
                negativos++;
            }
        }
    }

    printf("Quantos elementos negativos na matriz: %d\n", negativos);

    return 0;
}