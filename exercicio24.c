#include <stdio.h>
#include <locale.h>
#define IMPMG 0.07
#define IMPSP 0.12
#define IMPRJ 0.15
#define IMPMS 0.08

int main(){
	setlocale(LC_ALL, "Portuguese");
	int menu;
	float preco, precoFinal;
	printf("\nDigite o preço do produto, em R$: ");
	scanf("%f", &preco);
	printf("\nEscolha a UF para aplicar o imposto:");
	printf("\n\t1 - MG");
	printf("\n\t2 - SP");
	printf("\n\t3 - RJ");
	printf("\n\t4 - MS");
	printf("\n");
	scanf("%i", &menu);
	switch(menu){
		case 1:
			precoFinal = preco+(preco*IMPMG);
			printf("\nPreço final: R$ %.2f", precoFinal);
			break;
		case 2:
			precoFinal = preco+(preco*IMPSP);
			printf("\nPreço final: R$ %.2f", precoFinal);
			break;
		case 3:
			precoFinal = preco+(preco*IMPRJ);
			printf("\nPreço final: R$ %.2f", precoFinal);
			break;
		case 4:
			precoFinal = preco+(preco*IMPMS);
			printf("\nPreço final: R$ %.2f", precoFinal);
			break;
		default:
			printf("\nUF inválida!");
	}
	return 0;
}
