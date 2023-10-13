#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float custoFabrica, comissao, impostos, valorTotal;
	printf("\nDigite os custos da fábrica: ");
	scanf("%f", &custoFabrica);
	if(custoFabrica>=0&&custoFabrica<=50000){
		comissao = custoFabrica*0.05;
		impostos = 0;
		valorTotal = custoFabrica + comissao + impostos; 
	} else if(custoFabrica>50000&&custoFabrica<=100000){
		comissao = custoFabrica*0.1;
		impostos = custoFabrica*0.15;
		valorTotal = custoFabrica + comissao + impostos; 
	} else if(custoFabrica>100000){
		comissao = custoFabrica*0.15;
		impostos = custoFabrica*0.2;
		valorTotal = custoFabrica + comissao + impostos; 
	} else{
		printf("\nValor inválido!");
		return 0;
	}
	printf("\nImpostos: R$ %.2f",impostos);
	printf("\nParte do distribuidor: R$ %.2f",comissao);
	printf("\nValor total: R$ %.2f",valorTotal);
	return 0;
}
