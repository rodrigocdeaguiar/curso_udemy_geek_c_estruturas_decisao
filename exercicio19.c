#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("\nDigite um número inteiro: ");
	scanf("%i", &num);
	if((num%5==0)&&(num%3==0)){
		printf("Número é divisível por 5 e por 3");
	} else if(num%5==0){
		printf("Número é divisível por 5");
	} else if(num%3==0){
		printf("Número é divisível por 3");
	}else{
		printf("Número não é divisível por 5 e por 3");
	}
	return 0;
}
