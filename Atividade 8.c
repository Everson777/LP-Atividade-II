#include <stdio.h>

int main() {
    int numero;

    // Solicitar um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verificar se o número é positivo
    if (numero < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    // Contagem regressiva a partir do número inserido
    printf("Contagem regressiva a partir de %d:\n", numero);
    while (numero >= 0) {
        printf("%d\n", numero);
        numero--;
    }

    return 0;
}
