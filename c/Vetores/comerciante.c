#include <stdio.h>

int main() {

    int qnt;
    char nome[100][50];
    double compra[100], venda[100];
    int lucroAbaixo = 0, lucroEntre = 0, lucroAcima = 0;
    double lucroTotal = 0, totalCompra = 0, totalVenda = 0;

    printf("Serao digitados dados de quantos produtos?\n");
    scanf("%d", &qnt);

    for (int i = 0; i < qnt; i++) {

        printf("Produto %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", nome[i]);

        printf("Preco de compra: ");
        scanf("%lf", &compra[i]);

        printf("Preco de venda: ");
        scanf("%lf", &venda[i]);
    }

    printf("\nRELATORIO:\n");

    for (int i = 0; i < qnt; i++) {

        double lucro = ((venda[i] - compra[i]) / compra[i]) * 100;

        if (lucro < 10) {
            lucroAbaixo++;
        }
        else if (lucro <= 20) {
            lucroEntre++;
        }
        else {
            lucroAcima++;
        }

        totalCompra += compra[i];
        totalVenda += venda[i];
    }

    lucroTotal = totalVenda - totalCompra;

    printf("Lucro abaixo de 10%%: %d\n", lucroAbaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", lucroEntre);
    printf("Lucro acima de 20%%: %d\n", lucroAcima);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", lucroTotal);

    return 0;
}