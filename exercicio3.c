#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digiter um n�mero inteiro: ");
	scanf("%i", &num);
	if(num>=0){
		printf("Raiz quadrada do n�mero: %.1f", sqrt(num));
	} else{
		printf("N�mero ao quadrado: %.1f", pow(num,2));
	}
	return 0;
}
