#include <stdio.h>

int main() {
	int etanol = 0, gasolina = 0, disel = 0, combustivel;

	printf("Digite o tipo de combustivel (1 para alcool, 2 para gasolina, 3 para diesel ou 4 para parar)\n");
	scanf("%d", &combustivel);

	while(combustivel != 4) {

		switch (combustivel) {
	case 1:
		etanol++;
		break;
	case 2:
		gasolina++;
		break;
	case 3:
		disel++;
		break;
	default:
		printf("Opção inválida\n");
	}
	printf("Digite o tipo de combustível (1 para álcool, 2 para gasolina, 3 para diesel ou 4 para parar\n");
	scanf("%d", &combustivel);
			
	}

	printf("Muito Obrigada!\nA quantidade de alcool foi %d\nA quantidade de gasolina foi %d\n A quantidade de diesel foi %d.", etanol, gasolina, disel);
	return 0;


}