#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int qtdNumeros, i, aux, n, cresc = 1;

	printf("Digite a quantidade de n�mero: ");
	scanf("%d", &qtdNumeros); // Quantidade de numeros
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &n); // 1st numero
	
	for(i = 1; i < qtdNumeros; i++) {
		printf("Digite o segundo n�mero: ");
		scanf("%d", &aux); // 2nd numero
		
		if(aux < n) { // verifica se a aux (2nd numero) � menor que n (1st numero)
			cresc = 0; // crescente se torna 0 (falso/n�o crescente)
		}
		
		n = aux; // n se torna aux
	}
	
	if(cresc == 0){
		printf("N�o � crescente!");
	} else {
		printf("� crescente!");
	}
	
}
