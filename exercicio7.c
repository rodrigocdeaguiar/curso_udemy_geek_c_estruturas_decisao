#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	printf("\nDigite um número inteiro: ");
	scanf("%i", &num1);
	printf("\nDigite outro número inteiro: ");
	scanf("%i", &num2);
	if(num1>num2){
		printf("\nNúmero maior: %i", num1);
	}else if(num2>num1){
		printf("\nNúmero maior: %i", num2);
	}else{
		printf("\nNúmeros iguais!");
	}
	return 0;
}
