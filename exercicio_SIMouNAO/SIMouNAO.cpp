#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int number;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &number);
    
    if(number % 2 == 0 & number > 10 || number % 2 != 0 & number < 50) {
        printf("SIM");
    } else {
        printf("NÃO");
    }
}

