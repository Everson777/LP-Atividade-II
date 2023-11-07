#include <stdio.h>

int main() {
    int numero, i, divisores = 0;

    // Solicitar um número inteiro do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verificar se o número é maior que 1
    if (numero <= 1) {
        printf("Número inválido. Insira um número inteiro maior que 1.\n");
        return 1;
    }

    // Verificar se o número é primo
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}
