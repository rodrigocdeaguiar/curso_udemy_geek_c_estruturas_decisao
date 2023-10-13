#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	int menu;
	printf("Digite um número inteiro: ");
	scanf("%f", &num1);
	printf("Digite um número inteiro: ");
	scanf("%f", &num2);
	printf("\nMenu:");
	printf("\n\t1 - Soma dos dois números");
	printf("\n\t2 - Diferente entre os dois números (maior e menor)");
	printf("\n\t3 - Produto entre os dois números");
	printf("\n\t4 - Divisão entre os dois números");
	printf("\n");
	scanf("%i", &menu);
	switch(menu){
		case 1:
			printf("Soma: %.2f", num1+num2);
			break;
		case 2:
			if(num1>num2){
				printf("Diferença: %.2f", num1-num2);
			}else{
				printf("Diferença: %.2f", num2-num1);
			}
			break;
		case 3:
			printf("Produto: %.2f", num1*num2);
			break;
		case 4:
			if(num2!=0){
				printf("Resultado da divisão: %.2f", num1/num2);
				break;
			}else{
				printf("Divisão inválida. Denominador = 0");
			}
			break;
		default:
			printf("Menu inválido!");
	}
	return 0;
}
