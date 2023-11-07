#include <stdio.h>

int main() {
    int escolha;

    printf("Menu:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configurações\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Iniciar um novo jogo...\n");
            // Funcionalidade para iniciar um novo jogo
            break;
        case 2:
            printf("Carregar jogo existente...\n");
            // Funcionalidade para carregar um jogo
            break;
        case 3:
            printf("Ajustar as configurações do jogo...\n");
            // Funcionalidade para configurar o jogo
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
