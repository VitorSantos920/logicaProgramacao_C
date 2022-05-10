#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int v1[5], v2[5], i, j;

	for(i = 0; i < 5; i++){
		printf("Digite a posição %d do 1° Vetor: ", i);
	    scanf("%d", &v1[i]);
	    printf("Valor inserido: %d\n\n", v1[i]);
	}
	printf("\n\n\n");
	for(i = 0; i < 5; i++){
	    printf("Digite a posição %d do 2° Vetor: ", i);
	    scanf("%d", &v2[i]);
	    printf("Valor inserido: %d\n\n", v2[i]);
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(v1[i] == v2[j]){
				printf("O número %d na posição %d do 1° vetor é igual ao que está na posição %d do 2° vetor\nv1[%d] == v2[%d]\n\n", v1[i], i, j, i, j);
			}
		}
	}
	
	
}

