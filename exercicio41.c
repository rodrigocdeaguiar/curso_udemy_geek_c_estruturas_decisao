#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	float peso, altura, imc;
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite o peso, em kg: ");
	scanf("%f", &peso);
	printf("\nDigite a altura, em m: ");
	scanf("%f", &altura);
	imc = peso/pow(altura, 2);
	if(imc<=18.5){
		printf("\nAbaixo do peso");
	} else if(imc>=18.6&&imc<=24.9){
		printf("\nSaudável");
	} else if(imc>=25&&imc<=29.9){
		printf("\nPeso em excesso");
	} else if(imc>=30&&imc<=34.9){
		printf("\nObesidade grau 1");
	} else if(imc>=35&&imc<=39.9){
		printf("\nObesidade grau 2 (Severa)");
	} else{
		printf("\nObesidade grau 3 (Mórbida)");
	}
	return 0;
}
