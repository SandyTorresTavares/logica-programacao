#include <stdio.h>

int main() {

    int n;
    double numeros[100];
    double soma = 0;
    double media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &numeros[i]);

        soma += numeros[i];
    }

    media = soma / n;

    printf("\nMEDIA DO VETOR = %.3lf\n", media);

    printf("ELEMENTOS ABAIXO DA MEDIA:\n");

    for (int i = 0; i < n; i++) {
        if (numeros[i] < media) {
            printf("%.1lf\n", numeros[i]);
        }
    }

    return 0;
}