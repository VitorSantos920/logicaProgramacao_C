#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int v1[5], v2[5], v3[5], i, resultado = 0;

  for(i = 0; i < 5; i++){
  	// 1 Vetor
    printf("Digite o valor para a posição %d do 1° Vetor: ", i);
    scanf("%d", &v1[i]);
    printf("Valor inserido: %d\n\n", v1[i]);
    
    // 2 Vetor
    printf("Digite o o valor para a posição %d do 2° Vetor: ", i);
    scanf("%d", &v2[i]);
    printf("Valor inserido: %d\n\n", v2[i]);
  }
  
  for(i = 0; i < 5; i++){
  	// Somando o valor do Resultado com a multiplicação das posições do vetor 1 e 2;
  	resultado  = resultado + (v1[i] * v2[i]);
  }

  printf("Soma dos produtos internos dos vetores: %d", resultado);
  
}
