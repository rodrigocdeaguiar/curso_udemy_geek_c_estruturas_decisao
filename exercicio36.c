#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float vendas, comissao;
	printf("Digite o valor das vendas no mês, em R$: ");
	scanf("%f", &vendas);
	if(vendas>=100000){
		comissao = 700+vendas*0.16;
	}else if(vendas<100000&&vendas>=80000){
		comissao = 650+vendas*0.14;
	}else if(vendas<80000&&vendas>=60000){
		comissao = 600+vendas*0.14;
	}else if(vendas<60000&&vendas>=40000){
		comissao = 550+vendas*0.14;
	}else if(vendas<40000&&vendas>=20000){
		comissao = 500+vendas*0.14;
	}else if(vendas<20000&&vendas>=0){
		comissao = 400+vendas*0.14;
	}else{
		printf("Valor de vendas inválido!");
		return 0;
	}
	printf("Comissão: R$ %.2f", comissao);
	return 0;
}
