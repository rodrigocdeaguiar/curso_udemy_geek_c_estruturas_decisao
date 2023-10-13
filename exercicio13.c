#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, mediaFinal;
	printf("\nDigite a nota da prova1: ");
	scanf("%f", &nota1);
	printf("\nDigite a nota da prova2: ");
	scanf("%f", &nota2);
	printf("\nDigite a nota da prova1: ");
	scanf("%f", &nota3);
	if((nota1>10||nota1<0)||(nota2>10||nota2<0)||(nota3>10||nota3<0)){
		printf("\nUm dos valores de nota está inválido!");
		return 1;
	}else{
		mediaFinal = (nota1 + nota2 + (nota3*2))/4;
		printf("\nMédia final: %.1f", mediaFinal);
		if(mediaFinal>=6){
			printf("\nResultado: APROVADO!");
		}else{
			printf("\nResultado: REPROVADO!");
		}
		return 0;
	}
}
