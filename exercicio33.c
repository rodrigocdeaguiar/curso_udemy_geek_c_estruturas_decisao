#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float preco, precoNovo;
	printf("Digite o pre�o antigo, em R$: ");
	scanf("%f", &preco);
	if (preco<0){
		printf("\nPre�o inv�lido!");
	}else if (preco<80){
		precoNovo = preco+preco*0.05;
		printf("\nAumento: 5%%. Pre�o novo: %.2f", precoNovo);
	}else if(preco>=50&&preco<100){
		precoNovo = preco+preco*0.1;
		printf("\nAumento: 10%%. Pre�o novo: %.2f", precoNovo);
	}else{
		precoNovo = preco+preco*0.15;
		printf("\nAumento: 15%%. Pre�o novo: %.2f", precoNovo);
	}
	if (precoNovo<80){
		printf("\nPre�o barato!");
	}else if (precoNovo>=80&&precoNovo<=120){
		printf("\nPre�o normal!");
	}else if (precoNovo>120&&precoNovo<=200){
		printf("\nPre�o caro!");
	}else{
		printf("\nPre�o muito caro!");
	}
	return 0;
}
