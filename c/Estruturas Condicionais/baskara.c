#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada() { 
	 char c; 
	 while ((c = getchar()) != '\n' && c != EOF) {}}	

int main() {

    double A, B, C, delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    delta = B * B - 4 * A * C;

    if (delta < 0 || A == 0) {
        printf("Nao existem raizes reais.\n");
    } 
    else {
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
        printf("As raizes sao: %.2lf e %.2lf\n", x1, x2);
    }

    return 0;
}