#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float ladoA, ladoB, ladoC;
	printf("\nDigite o lado A do triângulo: ");
	scanf("%f", &ladoA);
	printf("\nDigite o lado B do triângulo: ");
	scanf("%f", &ladoB);
	printf("\nDigite o lado C do triângulo: ");
	scanf("%f", &ladoC);
	if(ladoA>(ladoB+ladoC)||ladoB>(ladoA+ladoC)||ladoC>(ladoB+ladoA)){
		printf("As medidas não são de um triângulo!");
	}else{
		if((ladoA!=ladoB)&&(ladoC!=ladoA)&&(ladoB!=ladoC)){
			printf("Esse é um triângulo escaleno.");
		}else if((ladoA==ladoB)&&(ladoC==ladoA)&&(ladoB==ladoC)){
			printf("Esse é um triângulo equilátero.");
		}else{
			printf("Esse é um triângulo isósceles.");
		}
	}
	return 0;
}
