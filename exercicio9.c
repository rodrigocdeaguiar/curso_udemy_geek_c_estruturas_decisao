#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, prestEmprestimo;
	printf("\nDigite o sal�rio: ");
	scanf("%f", &salario);
	printf("\nDigite o valor do empr�stimo: ");
	scanf("%f", &prestEmprestimo);
	if((salario*0.2)>prestEmprestimo){
		printf("\nEmpr�stimo concedido!");
	}else{
		printf("\nEmpr�stimo n�o concedido!");
	}
	return 0;
}
