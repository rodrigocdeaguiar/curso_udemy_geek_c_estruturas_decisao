#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, mediaFinal;
	printf("\nDigite a nota do Trabalho de Laboratório: ");
	scanf("%f", &nota1);
	printf("\nDigite a nota da Avaliação Semestral: ");
	scanf("%f", &nota2);
	printf("\nDigite a nota do exame semestral: ");
	scanf("%f", &nota3);
	if((nota1>10||nota1<0)||(nota2>10||nota2<0)||(nota3>10||nota3<0)){
		printf("\nUm dos valores de nota está inválido!");
		return 1;
	}else{
		mediaFinal = ((nota1*2) + (nota2*3) + (nota3*5))/10;
		printf("\nMédia final: %.1f", mediaFinal);
		if(mediaFinal<=3){
			printf("\nResultado: REPROVADO!");
		}else if(mediaFinal>=3&&mediaFinal<=4.9){
			printf("\nResultado: RECUPERAÇÃO!");
		}else{
			printf("\nResultado: APROVADO!");
		}
		return 0;
	}
}
