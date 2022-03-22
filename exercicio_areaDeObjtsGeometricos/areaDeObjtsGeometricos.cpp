#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char escolha;
	float ladoQuad, areaQuad, ladoRet1, ladoRet2, areaRet, raioCirc, areaCirc, pi=3.14;
	
	printf("Q => Quadrado\nR => Ret�ngulo\nC => C�rculo\n");
	printf("Digite a letra referente ao objeto geom�trico que deseja calcular a �rea: ");
	scanf("%c", &escolha);
	
	printf("\nSUA ESCOLHA: %c", escolha);
	
	// C�lculo da �rea do Quadrado
	if(escolha == 'q' || escolha == 'Q'){
		printf("\nDigite o lado do quadrado: ");
		scanf("%f", &ladoQuad);
		
		areaQuad = pow(ladoQuad, 2); // Lado ao quadrado (pow)
		
		printf("***A �rea do quadrado �: %.2f***", areaQuad);
	}

	// C�lculo da �rea do Ret�ngulo
	else if(escolha == 'r' || escolha == 'R'){
		printf("\nDigite o primeiro lado do ret�ngulo: ");
		scanf("%f", &ladoRet1);
		
		printf("Digite o segundo lado do ret�ngulo: ");
		scanf("%f", &ladoRet2);
		
		areaRet = ladoRet1 * ladoRet2; // (Lado) x (Lado)
		
		printf("\n***A �rea do ret�ngulo �: %.2f***", areaRet);
	}
	
	// C�lculo da �rea do C�rculo
	else if(escolha == 'c' || escolha == 'C'){
		printf("\nDigite o raio do c�rculo: ");
		scanf("%f", &raioCirc);
		
		areaCirc = pi * pow(raioCirc, 2); // (Valor de pi) x (Valor do raio ao quadrado)
		
		printf("***A �rea do c�rculo �: %.2f***", areaCirc);
	}
	
	// Escolha inv�lida
	else {
		printf("\nERROR: Escolha inv�lida!");
	}
}
