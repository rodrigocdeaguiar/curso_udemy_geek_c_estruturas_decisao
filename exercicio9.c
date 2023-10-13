#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, prestEmprestimo;
	printf("\nDigite o salário: ");
	scanf("%f", &salario);
	printf("\nDigite o valor do empréstimo: ");
	scanf("%f", &prestEmprestimo);
	if((salario*0.2)>prestEmprestimo){
		printf("\nEmpréstimo concedido!");
	}else{
		printf("\nEmpréstimo não concedido!");
	}
	return 0;
}
