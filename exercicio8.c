#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, media;
	printf("\nDigite a nota 1: ");
	scanf("%f", &nota1);
	printf("\nDigite a nota 2: ");
	scanf("%f", &nota2);
	if((nota1>=0&&nota1<=10)&&(nota2>=0&&nota2<=10)){
		media = (nota1+nota2)/2;
		printf("\nMédia: %.1f", media);
	}else{
		printf("\nNota(s) inválida(s)!");
	}
	return 0;
}
