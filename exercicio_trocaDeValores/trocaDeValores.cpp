#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int v1, v2, aux;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um valor: ");
	scanf("%d", &v1);
	
	printf("Digite outro valor: ");
	scanf("%d", &v2);
	
	aux = v1;
	v1 = v2;
	v2 = aux;
	
	printf("A variável 1 (v1) é: %d\nA variável 2 (v2) é: %d", v1, v2);
	
}
