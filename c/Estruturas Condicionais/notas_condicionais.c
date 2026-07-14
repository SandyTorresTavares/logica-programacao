#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada() { 
	 char c; 
	 while ((c = getchar()) != '\n' && c != EOF) {}}	

int main() {

 		double nota1, nota2, media;

 	printf("Digite a primeira nota:");
 	scanf("%lf", &nota1);
 	limpar_entrada();
 	printf("Digite a segunda nota nota:");
 	scanf("%lf", &nota2);
 	limpar_entrada();

 	media = (nota1 + nota2) / 2;

 	if (media >= 7.0) {
    printf("Parabens! Voce foi aprovado com a nota %.2lf\n", media);
}
else if (media >= 5.0) {
    printf("Voce esta em Recuperacao\nSua media e: %.2lf\n", media);
}
else {
    printf("Reprovado!\n Sua media e %.2lf\n", media);
} 
return 0;
}


