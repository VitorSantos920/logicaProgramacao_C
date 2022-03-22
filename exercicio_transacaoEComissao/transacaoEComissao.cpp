/*
 * R$ 0,01 -- R$ 2.500,00 --> R$30+1,7%
 * R$2.500,01 - R$6.250,00 --> R$56 + 0,66%
 * R$6.250,01 - R$20.000,00 --> R$76 + 0,34%
 * R$20.000,01 - R$50.000,00 --> R$100 + 0,22%
 * R$50.000,01 - R$500.000,00 --> R$155 + 0,11%
 * Mais que R$ 500.000,00 --> R$255 + 0,09%
 *
 * comissão mínima é de R$ 39,00
 */

#include <stdio.h>

int main() {
    float valor, comissao;

    scanf("%f", &valor);

    if(valor <= 2500) {
        comissao = 30 + (valor * 1.7 / 100);
        if (comissao < 39)
            comissao = 39.0;
    }
    else if(valor <= 6250)
        comissao = 56 + (valor * 0.66/100);
    else if(valor <= 20000)
        comissao = 76 + (valor * 0.34/100);
    else if(valor <= 50000)
        comissao = 100 + (valor * 0.22/100);
    else if(valor <= 500000)
        comissao = 155 + (valor * 0.11/100);
    else
        comissao = 255 + (valor * 0.09/100);

    printf("\nComissao = %.2f", comissao);
    return 0;
}

