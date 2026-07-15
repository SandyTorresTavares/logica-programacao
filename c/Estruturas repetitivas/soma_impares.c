#include <stdio.h>

int main() {
    int n1, n2, i, soma = 0;
    
    printf("Digite dois numeros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    for (i = n1; i < n2; i ++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    printf("A soma dos numeros impares de %d a %d e: %d\n", n1, n2, soma);
    
    return 0;
}