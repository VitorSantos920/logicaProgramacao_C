/*
	leia um inteiro positivo N, e imprima as potências 2^0, 2^1,....,2^N
*/
#include <stdio.h>

int main() {
	int pot = 1, i;
	for(i = 0; i <= pot
	; i++) {
		printf("%d\n", pot);
		pot = pot * 2;
	}
}
