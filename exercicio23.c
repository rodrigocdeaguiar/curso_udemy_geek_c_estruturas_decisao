#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano;
	printf("\nDigite o ano para saber se este � bissexto: ");
	scanf("%i", &ano);
	if(((ano%400==0)||(ano%4==0))&&(ano%100!=0)){
		printf("\nEste � um ano bissexto!");
	}else{
		printf("\nEste n�o � um ano bissexto!");
	}
	return 0;
}
