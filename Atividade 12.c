#include <stdio.h>

int main() {
    int quantidade_notas, i;
    float nota, total_notas = 0, media;

    printf("Quantas notas voc� deseja inserir? ");
    scanf("%d", &quantidade_notas);

    for (i = 0; i < quantidade_notas; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        total_notas += nota;
    }

    media = total_notas / quantidade_notas;
    printf("A m�dia das notas digitadas �: %.2f\n", media);

    return 0;
}
