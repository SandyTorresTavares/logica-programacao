#include <stdio.h>

int main() {

    double idade, soma = 0, media;
    int quantidade = 0;

    printf("Digite as idades:\n");
    scanf("%lf", &idade);

    while (idade >= 0) {

        soma += idade;
        quantidade++;

        printf("Digite as idades:\n");
        scanf("%lf", &idade);
    }

    if (quantidade == 0) {
        printf("Impossivel calcular a media, pois nao foram digitadas idades validas.\n");
    }
    else {
        media = soma / quantidade;
        printf("A media das idades e %.2lf\n", media);
    }

    return 0;
}