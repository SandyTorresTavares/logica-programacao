#include <stdio.h>

int main() {

    int n;
    double alturas[100];
    char generos[100];

    double maiorAltura;
    double menorAltura;
    double somaAlturaMulheres = 0;
    double mediaMulheres;

    int quantidadeMulheres = 0;
    int quantidadeHomens = 0;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        printf("\nDados da %da pessoa:\n", i + 1);

        printf("Altura: ");
        scanf("%lf", &alturas[i]);

        printf("Genero (M/F): ");
        scanf(" %c", &generos[i]);

        // Inicializa maior e menor usando a primeira pessoa
        if (i == 0) {
            maiorAltura = alturas[i];
            menorAltura = alturas[i];
        }

        if (alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }

        if (alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }

        if (generos[i] == 'F') {
            somaAlturaMulheres += alturas[i];
            quantidadeMulheres++;
        }
        else if (generos[i] == 'M') {
            quantidadeHomens++;
        }
    }

    printf("\nMAIOR ALTURA = %.2lf\n", maiorAltura);
    printf("MENOR ALTURA = %.2lf\n", menorAltura);

    if (quantidadeMulheres > 0) {
        mediaMulheres = somaAlturaMulheres / quantidadeMulheres;
        printf("MEDIA DAS ALTURAS DAS MULHERES = %.2lf\n", mediaMulheres);
    }
    else {
        printf("NAO HA MULHERES NO GRUPO\n");
    }

    printf("NUMERO DE HOMENS = %d\n", quantidadeHomens);

    return 0;
}