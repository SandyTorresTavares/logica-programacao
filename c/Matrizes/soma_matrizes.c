#include <stdio.h>
int main () {
    int matrizA[10][10], matrizB[10][10], matrizC[10][10], linhas, colunas;
    
    printf("Quantas linhas vai ter cada matriz?\n");
    scanf("%d", &linhas);

    printf("Quantas colunas vai ter cada matriz?\n");
    scanf("%d", &colunas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
        printf("Digite o numero da Matriz A\n");
        printf("Elemento [%d,%d]:\n", i, j);
        scanf("%d", &matrizA[i][j]); 
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
        printf("Digite o numero da Matriz B\n");
        printf("Elemento [%d,%d]:\n", i, j);
        scanf("%d", &matrizB[i][j]); 
        }
    }

    printf("MATRIZ SOMA:\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
        matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        printf("%d ", matrizC[i][j]); 
        }
        printf("\n");
        
    }
    



    

    return 0;

}