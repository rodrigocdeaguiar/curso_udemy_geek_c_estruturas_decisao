#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &num);
	if(num%2==0){
		printf("\nO n�mero � par!");
	}else{
		printf("\nO n�mero � �mpar!");
	}
	return 0;
}
