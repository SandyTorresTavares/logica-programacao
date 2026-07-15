#include <stdio.h>

int main() {
    double valorCompra, valorRecebido, troco;
    int quantidadeProdutos;

    printf("Digite o valor do produto: ");
    scanf("%lf", &valorCompra);
    printf("Quantos produtos foram comprados? ");
    scanf("%d", &quantidadeProdutos);

    valorCompra *= quantidadeProdutos;
    printf("Qual o valor pago? ");
    scanf("%lf", &valorRecebido);

    troco = valorRecebido - valorCompra;

    if (troco < 0) {
        printf("Valor recebido e insuficiente.\n");
    } else if (troco == 0) {
        printf("O valor pago e exato. Nao ha troco.\n");
    } else {
        printf("O troco e: R$ %.2lf\n", troco);
    }

    return 0;
}