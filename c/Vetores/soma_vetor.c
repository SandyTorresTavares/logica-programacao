#include <stdio.h>
int main () {
    int qnt;
    double vetor[100], soma = 0, media;

    printf("Quantos numeros deseja digitar?\n");
    scanf("%d", &qnt);

    for (int i = 0; i < qnt; i++) {
        printf("Digite o %do numero:\n", i+1);
        scanf("%lf", &vetor[i]);
        soma += (vetor[i]);
    }

     media = soma / qnt;
    printf("VALORES =\n");

    for (int i = 0; i < qnt; i++) {
        printf("%.1lf \n", vetor[i]);
    }

    printf("SOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf\n", media);

    return 0;

}