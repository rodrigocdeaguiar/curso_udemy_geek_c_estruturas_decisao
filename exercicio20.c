#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float ladoA, ladoB, ladoC;
	printf("\nDigite o lado A do tri�ngulo: ");
	scanf("%f", &ladoA);
	printf("\nDigite o lado B do tri�ngulo: ");
	scanf("%f", &ladoB);
	printf("\nDigite o lado C do tri�ngulo: ");
	scanf("%f", &ladoC);
	if(ladoA>(ladoB+ladoC)||ladoB>(ladoA+ladoC)||ladoC>(ladoB+ladoA)){
		printf("As medidas n�o s�o de um tri�ngulo!");
	}else{
		if((ladoA!=ladoB)&&(ladoC!=ladoA)&&(ladoB!=ladoC)){
			printf("Esse � um tri�ngulo escaleno.");
		}else if((ladoA==ladoB)&&(ladoC==ladoA)&&(ladoB==ladoC)){
			printf("Esse � um tri�ngulo equil�tero.");
		}else{
			printf("Esse � um tri�ngulo is�sceles.");
		}
	}
	return 0;
}
