#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("\nDigite um n�mero inteiro: ");
	scanf("%i", &num);
	if((num%5==0)&&(num%3==0)){
		printf("N�mero � divis�vel por 5 e por 3");
	} else if(num%5==0){
		printf("N�mero � divis�vel por 5");
	} else if(num%3==0){
		printf("N�mero � divis�vel por 3");
	}else{
		printf("N�mero n�o � divis�vel por 5 e por 3");
	}
	return 0;
}
