#include <stdio.h>

int main() {

    int n;
    double numeros[100];
    double maior;
    int posicaoMaior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &numeros[i]);
    }

    maior = numeros[0];
    posicaoMaior = 0;

    for (int i = 1; i < n; i++) {

        if (numeros[i] > maior) {
            maior = numeros[i];
            posicaoMaior = i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d\n", posicaoMaior);

    return 0;
}