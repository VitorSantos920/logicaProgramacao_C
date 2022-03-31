#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int qtdNumeros, i, aux, n, cresc = 1;

	printf("Digite a quantidade de número: ");
	scanf("%d", &qtdNumeros); // Quantidade de numeros
	
	printf("Digite o primeiro número: ");
	scanf("%d", &n); // 1st numero
	
	for(i = 1; i < qtdNumeros; i++) {
		printf("Digite o segundo número: ");
		scanf("%d", &aux); // 2nd numero
		
		if(aux < n) { // verifica se a aux (2nd numero) é menor que n (1st numero)
			cresc = 0; // crescente se torna 0 (falso/não crescente)
		}
		
		n = aux; // n se torna aux
	}
	
	if(cresc == 0){
		printf("Não é crescente!");
	} else {
		printf("É crescente!");
	}
	
}
