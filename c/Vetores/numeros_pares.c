#include <stdio.h>

int main() {

    int n;
    int numeros[100];
    int quantidadePares = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nNUMEROS PARES:\n");

    for (int i = 0; i < n; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
            quantidadePares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d\n", quantidadePares);

    return 0;
}