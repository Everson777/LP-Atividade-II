#include <stdio.h>

int main() {
    int numero;

    // Solicitar um n�mero inteiro positivo
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    // Verificar se o n�mero � positivo
    if (numero < 0) {
        printf("Por favor, insira um n�mero inteiro positivo.\n");
        return 1;
    }

    // Contagem regressiva a partir do n�mero inserido
    printf("Contagem regressiva a partir de %d:\n", numero);
    while (numero >= 0) {
        printf("%d\n", numero);
        numero--;
    }

    return 0;
}
