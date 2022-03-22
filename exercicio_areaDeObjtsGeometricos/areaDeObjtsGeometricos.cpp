#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char escolha;
	float ladoQuad, areaQuad, ladoRet1, ladoRet2, areaRet, raioCirc, areaCirc, pi=3.14;
	
	printf("Q => Quadrado\nR => Retângulo\nC => Círculo\n");
	printf("Digite a letra referente ao objeto geométrico que deseja calcular a área: ");
	scanf("%c", &escolha);
	
	printf("\nSUA ESCOLHA: %c", escolha);
	
	// Cálculo da Área do Quadrado
	if(escolha == 'q' || escolha == 'Q'){
		printf("\nDigite o lado do quadrado: ");
		scanf("%f", &ladoQuad);
		
		areaQuad = pow(ladoQuad, 2); // Lado ao quadrado (pow)
		
		printf("***A área do quadrado é: %.2f***", areaQuad);
	}

	// Cálculo da Área do Retângulo
	else if(escolha == 'r' || escolha == 'R'){
		printf("\nDigite o primeiro lado do retângulo: ");
		scanf("%f", &ladoRet1);
		
		printf("Digite o segundo lado do retângulo: ");
		scanf("%f", &ladoRet2);
		
		areaRet = ladoRet1 * ladoRet2; // (Lado) x (Lado)
		
		printf("\n***A área do retângulo é: %.2f***", areaRet);
	}
	
	// Cálculo da Área do Círculo
	else if(escolha == 'c' || escolha == 'C'){
		printf("\nDigite o raio do círculo: ");
		scanf("%f", &raioCirc);
		
		areaCirc = pi * pow(raioCirc, 2); // (Valor de pi) x (Valor do raio ao quadrado)
		
		printf("***A área do círculo é: %.2f***", areaCirc);
	}
	
	// Escolha inválida
	else {
		printf("\nERROR: Escolha inválida!");
	}
}
