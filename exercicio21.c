#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	int menu;
	printf("Digite um n�mero inteiro: ");
	scanf("%f", &num1);
	printf("Digite um n�mero inteiro: ");
	scanf("%f", &num2);
	printf("\nMenu:");
	printf("\n\t1 - Soma dos dois n�meros");
	printf("\n\t2 - Diferente entre os dois n�meros (maior e menor)");
	printf("\n\t3 - Produto entre os dois n�meros");
	printf("\n\t4 - Divis�o entre os dois n�meros");
	printf("\n");
	scanf("%i", &menu);
	switch(menu){
		case 1:
			printf("Soma: %.2f", num1+num2);
			break;
		case 2:
			if(num1>num2){
				printf("Diferen�a: %.2f", num1-num2);
			}else{
				printf("Diferen�a: %.2f", num2-num1);
			}
			break;
		case 3:
			printf("Produto: %.2f", num1*num2);
			break;
		case 4:
			if(num2!=0){
				printf("Resultado da divis�o: %.2f", num1/num2);
				break;
			}else{
				printf("Divis�o inv�lida. Denominador = 0");
			}
			break;
		default:
			printf("Menu inv�lido!");
	}
	return 0;
}
