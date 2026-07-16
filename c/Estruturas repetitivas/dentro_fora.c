#include <stdio.h>
int main() {
    int numDentro = 0, numFora = 0, i, quantidade, numero;

    printf("Quantos numeros deseja digitar?\n");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        printf("Digite o %dº numero:\n", i + 1);
        scanf("%d", &numero);

        if (numero >= 10 && numero <= 20) {
            numDentro++;
        } else {
            numFora++;
        }
    }

    printf("Numeros dentro do intervalo: %d\n", numDentro);
    printf("Numeros fora do intervalo: %d\n", numFora);

    return 0;
}