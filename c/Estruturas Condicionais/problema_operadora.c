#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada() { 
	 char c; 
	 while ((c = getchar()) != '\n' && c != EOF) {}}	

int main() {
	double minutosExcedentes, minutosFixos = 100, minutosTotais, valorFixo = 50, valorExcedente, valorMinuto = 2, valorTotal;

	printf("Digite a quantidade de minutos:");
	scanf("%lf", &minutosTotais);

	minutosExcedentes = (minutosTotais - minutosFixos);
	valorExcedente = (minutosExcedentes * valorMinuto);
	valorTotal = (valorExcedente + valorFixo);

	if (minutosTotais > 100) 
	{
		printf("Voce excedeu %.1lf minutos e o valor a ser pago e de R$ %.2lf", minutosExcedentes, valorTotal);
	}

	else {
		printf("Voce vai pagar apenas o valor fixo de R$ 50.00");
	}
return 0;
}