#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano;
	printf("\nDigite o ano para saber se este é bissexto: ");
	scanf("%i", &ano);
	if(((ano%400==0)||(ano%4==0))&&(ano%100!=0)){
		printf("\nEste é um ano bissexto!");
	}else{
		printf("\nEste não é um ano bissexto!");
	}
	return 0;
}
