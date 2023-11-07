#include <stdio.h>

int main() {
    int numero, i, divisores = 0;

    // Solicitar um n�mero inteiro do usu�rio
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o n�mero � maior que 1
    if (numero <= 1) {
        printf("N�mero inv�lido. Insira um n�mero inteiro maior que 1.\n");
        return 1;
    }

    // Verificar se o n�mero � primo
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("%d � um n�mero primo.\n", numero);
    } else {
        printf("%d n�o � um n�mero primo.\n", numero);
    }

    return 0;
}
