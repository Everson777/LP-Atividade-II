#include <stdio.h>

int main() {
    int numero, count_pares = 0, count_impares = 0;
    int soma_pares = 0, soma_impares = 0;
    float media_pares, media_impares;

    printf("Digite n�meros inteiros (Digite um n�mero negativo para parar):\n");

    while (1) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (numero % 2 == 0) {
            count_pares++;
            soma_pares += numero;
        } else {
            count_impares++;
            soma_impares += numero;
        }
    }

    if (count_pares > 0) {
        media_pares = (float)soma_pares / count_pares;
        printf("N�meros pares: %d | M�dia dos n�meros pares: %.2f\n", count_pares, media_pares);
    } else {
        printf("Nenhum n�mero par foi digitado.\n");
    }

    if (count_impares > 0) {
        media_impares = (float)soma_impares / count_impares;
        printf("N�meros �mpares: %d | M�dia dos n�meros �mpares: %.2f\n", count_impares, media_impares);
    } else {
        printf("Nenhum n�mero �mpar foi digitado.\n");
    }

    return 0;
}
