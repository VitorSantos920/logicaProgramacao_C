/*Fa�a um programa que l� um n�mero n e imprima os valores entre 2 e n que s�o divisores de n.*/
#include <stdio.h>

int main() {
	int n;            // Quantidade desejada
	int i=1;          // Quantidade que conseguiu
	int numero;       // N�meros de teste
	
	scanf("%d", &n);
	
	for(numero = 1; i <= n; numero++) {
		if(numero % 2 == 0) {
			printf("%d, ", numero);
			i++;
		}
	} 
}
