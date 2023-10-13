#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	float logaritmo;
	printf("\nDigite um número inteiro positivo: ");
	scanf("%i", &numero);
	if(numero<0){
		printf("\nNúmero inválido!");
	}else{
		logaritmo = log(numero);
		printf("\nLogaritmo: %.2f", logaritmo);
	}
	return 0;
}
