#include <stdio.h>

int main() {

    int n;
    int numeros[100];
    int soma = 0;
    int quantidadePares = 0;
    double media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            soma += numeros[i];
            quantidadePares++;
        }
    }

    if (quantidadePares == 0) {
        printf("\nNENHUM NUMERO PAR\n");
    }
    else {
        media = (double) soma / quantidadePares;

        printf("\nMEDIA DOS PARES = %.1lf\n", media);
    }

    return 0;
}