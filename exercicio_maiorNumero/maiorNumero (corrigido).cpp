// Ler 3 n�meros
// Escrever o maior deles

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL ,"Portuguese");
	
    int a, b, c, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);
    
    printf("N�meros digitados: %d, %d, %d\n\n", a, b, c);

    if((a > b) && (a > c)){
    	maior = a;
    }
    else {
    	if(b > c){
    		maior = b;
    	} else {
    		maior = c;
		}
	}
	
	printf("Maior n�mero �: %d", maior);
}

