// Ler 3 números
// Escrevê-los na ordem
/*
    n1 =
    n2 =
    n3 =
    => Ordem crescente: n1 = 3, n3 = 6, n2 = 10.

    se

*/
#include <stdio.h>

int main() {
	int n1, n2, n3;

	printf("Digite o 1o. numero: ");
	scanf("%d", &n1);

	printf("Digite o 2o. numero: ");
	scanf("%d", &n2);

	printf("Digite o 3o. numero: ");
	scanf("%d", &n3);

    if(n1 > n2 && n2 > n3) {
        printf("A ordem crescente eh: %d => %d => %d", n3, n2, n1);
    }

    else if(n3 > n2 && n2 > n1) {
        printf("A ordem crescente eh: %d => %d => %d", n1, n2, n3);
    }

    else if(n2 > n3 && n1 > n3 && n2 > n1) {
        printf("A ordem crescente eh: %d => %d => %d", n3, n1, n2);
    }

    else if(n2 > n3 && n1 > n3 && n1 > n2) {
        printf("A ordem crescente eh: %d => %d => %d", n3, n1, n2);
    }

    else if(n3 > n1 && n3 > n1 && n1 > n2) {
        printf("A ordem crescente eh: %d => %d => %d", n2, n1, n3);
    }

    else if(n3 > n1 && n3 > n1 && n2 > n1) {
        printf("A ordem crescente eh: %d => %d => %d", n1, n2, n3);
    }
}

