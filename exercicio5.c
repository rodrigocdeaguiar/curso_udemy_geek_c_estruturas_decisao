#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	if(num%2==0){
		printf("\nO número é par!");
	}else{
		printf("\nO número é ímpar!");
	}
	return 0;
}
