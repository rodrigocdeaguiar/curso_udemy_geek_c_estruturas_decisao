#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &num);
	if(num>=0){
		printf("\nRaiz quadrada do n�mero: %.1f", sqrt(num));
		printf("\nN�mero ao quadrado: %.1f", pow(num,2));
	}
	return 0;
}
