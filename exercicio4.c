#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	if(num>=0){
		printf("\nRaiz quadrada do número: %.1f", sqrt(num));
		printf("\nNúmero ao quadrado: %.1f", pow(num,2));
	}
	return 0;
}
