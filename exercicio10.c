#include <stdio.h>
#include <locale.h>

int main(){
	char sexo;
	float peso, pesoIdeal, altura;
	printf("\nDigite o sexo: (M)asculino, ou (F)eminino: ");
	scanf("%c", &sexo);
	printf("\nDigite o peso: ");
	scanf("f", &peso);
	if(sexo=='m'||sexo=='M'){
		pesoIdeal = (72.7*altura) - 58;
		printf("Peso ideal: %f", pesoIdeal);
	}else if(sexo=='f'||sexo=='F'){
		pesoIdeal = (62.1*altura) - 44.7;
		printf("Peso ideal: %f", pesoIdeal);
	}else{
		printf("Valor inválido para sexo!");
	}
}
