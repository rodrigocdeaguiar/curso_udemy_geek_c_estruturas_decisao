#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float preco, precoNovo;
	printf("Digite o preço antigo, em R$: ");
	scanf("%f", &preco);
	if (preco<0){
		printf("\nPreço inválido!");
	}else if (preco<80){
		precoNovo = preco+preco*0.05;
		printf("\nAumento: 5%%. Preço novo: %.2f", precoNovo);
	}else if(preco>=50&&preco<100){
		precoNovo = preco+preco*0.1;
		printf("\nAumento: 10%%. Preço novo: %.2f", precoNovo);
	}else{
		precoNovo = preco+preco*0.15;
		printf("\nAumento: 15%%. Preço novo: %.2f", precoNovo);
	}
	if (precoNovo<80){
		printf("\nPreço barato!");
	}else if (precoNovo>=80&&precoNovo<=120){
		printf("\nPreço normal!");
	}else if (precoNovo>120&&precoNovo<=200){
		printf("\nPreço caro!");
	}else{
		printf("\nPreço muito caro!");
	}
	return 0;
}
