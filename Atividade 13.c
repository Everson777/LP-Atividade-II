#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d � o maior n�mero e %d � o menor n�mero.\n", num1, num2);
    } else if (num2 > num1) {
        printf("%d � o maior n�mero e %d � o menor n�mero.\n", num2, num1);
    } else {
        printf("Os n�meros s�o iguais: %d e %d.\n", num1, num2);
    }

    return 0;
}
