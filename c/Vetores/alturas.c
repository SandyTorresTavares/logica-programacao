#include <stdio.h>

int main() {

    int quantidade;
    int idade[100];
    char nome[100][50];
    double altura[100];
    double soma = 0, media, porcentagem;
    int menores = 0;

    printf("Quantas pessoas voce deseja informar? ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {

        printf("\nDados da %da pessoa:\n", i + 1);

        printf("Nome: ");
        scanf("%s", nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);

        soma += altura[i];

        if (idade[i] < 16) {
            menores++;
        }
    }

    media = soma / quantidade;
    porcentagem = (menores * 100.0) / quantidade;

    printf("\nAltura media: %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", porcentagem);

    for (int i = 0; i < quantidade; i++) {
        if (idade[i] < 16) {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}