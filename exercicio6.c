#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	printf("\nDigite um n�mero inteiro: ");
	scanf("%i", &num1);
	printf("\nDigite outro n�mero inteiro: ");
	scanf("%i", &num2);
	if(num1>num2){
		printf("\nN�mero maior: %i", num1);
		printf("\nDiferen�a entre os dois n�meros: %i", num1-num2);
	}else if(num2>num1){
		printf("\nN�mero maior: %i", num2);
		printf("\nDiferen�a entre os dois n�meros: %i", num2-num1);
	}else{
		printf("\nN�meros iguais!");
	}
	return 0;
}
