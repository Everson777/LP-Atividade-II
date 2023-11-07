#include <stdio.h>

int main() {
    int numero, count_pares = 0, count_impares = 0;
    int soma_pares = 0, soma_impares = 0;
    float media_pares, media_impares;

    printf("Digite números inteiros (Digite um número negativo para parar):\n");

    while (1) {
        printf("Digite um número: ");
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
        printf("Números pares: %d | Média dos números pares: %.2f\n", count_pares, media_pares);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    if (count_impares > 0) {
        media_impares = (float)soma_impares / count_impares;
        printf("Números ímpares: %d | Média dos números ímpares: %.2f\n", count_impares, media_impares);
    } else {
        printf("Nenhum número ímpar foi digitado.\n");
    }

    return 0;
}
