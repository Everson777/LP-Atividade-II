#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d é o maior número e %d é o menor número.\n", num1, num2);
    } else if (num2 > num1) {
        printf("%d é o maior número e %d é o menor número.\n", num2, num1);
    } else {
        printf("Os números são iguais: %d e %d.\n", num1, num2);
    }

    return 0;
}
