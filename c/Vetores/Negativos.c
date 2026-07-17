#include <stdio.h>

int main() {

    int quantidade;
    double numeros[100];

    printf("Quantos numeros voce vai digitar?\n");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o %do numero:\n", i + 1);
        scanf("%lf", &numeros[i]);
    }

    printf("NUMEROS NEGATIVOS:\n");

    for (int i = 0; i < quantidade; i++) {
        if (numeros[i] < 0) {
            printf("%.1lf\n", numeros[i]);
        }
    }

    return 0;
}