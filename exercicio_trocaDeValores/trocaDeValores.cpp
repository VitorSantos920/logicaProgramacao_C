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
	
	printf("A vari�vel 1 (v1) �: %d\nA vari�vel 2 (v2) �: %d", v1, v2);
	
}
