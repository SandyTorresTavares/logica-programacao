#include <stdio.h>

int main() {
	int senhaCorreta, senha;

	senhaCorreta = 2002;

	printf("Digite sua senha:\n");
	scanf("%d", &senha);

	while(senha != senhaCorreta) {
		printf("Senha incorreta\n");
		printf("Digite sua senha:\n");
		scanf("%d", &senha);
	}

	if (senha == senhaCorreta);
	{
		printf("Acesso liberado");
	}
	
		return 0;

}