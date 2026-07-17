#include <stdio.h>

int main() {

    int n;
    char nomes[100][50];
    int idades[100];

    int maiorIdade;
    int posicaoMaisVelho;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        printf("\nDados da %da pessoa:\n", i + 1);

        printf("Nome: ");
        scanf("%s", nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);
    }

    maiorIdade = idades[0];
    posicaoMaisVelho = 0;

    for (int i = 1; i < n; i++) {

        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
            posicaoMaisVelho = i;
        }
    }

    printf("\nPESSOA MAIS VELHA: %s\n", nomes[posicaoMaisVelho]);

    return 0;
}