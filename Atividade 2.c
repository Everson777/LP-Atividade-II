#include <stdio.h>

float calcularDesconto(float valorCompra, int diaSemana) {
    float desconto = 0.0;
    
    if (valorCompra > 100) {
        if (diaSemana >= 1 && diaSemana <= 5) { // Dia de semana (segunda a sexta)
            desconto = valorCompra * 0.1; // Desconto de 10%
        } else if (diaSemana >= 6 && diaSemana <= 7) { // Fim de semana (sábado e domingo)
            desconto = valorCompra * 0.15; // Desconto de 15%
        }
    }

    return desconto;
}

int main() {
    float valorDaCompra;
    int diaDaSemana;

    printf("Digite o valor da compra: R$");
    scanf("%f", &valorDaCompra);

    printf("Digite o dia da semana (1 para segunda-feira, 2 para terça-feira, ..., 7 para domingo): ");
    scanf("%d", &diaDaSemana);

    float desconto = calcularDesconto(valorDaCompra, diaDaSemana);

    if (desconto > 0) {
        printf("Desconto aplicado: R$%.2f\n", desconto);
        printf("Valor final a pagar: R$%.2f\n", valorDaCompra - desconto);
    } else {
        printf("Sem desconto aplicado. Valor final a pagar: R$%.2f\n", valorDaCompra);
    }

    return 0;
}
