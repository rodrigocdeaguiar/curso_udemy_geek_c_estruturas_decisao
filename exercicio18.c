#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int menu;
	float num1, num2;
	printf("\nDigite um número inteiro: ");
	scanf("%f", &num1);
	printf("\nDigite outro número inteiro: ");
	scanf("%f", &num2);
	printf("\nDigite um dos números para escolher umas das operações matemáticas:");
	printf("\n\t1 - Adição");
	printf("\n\t2 - Subtração");
	printf("\n\t3 - Multiplicação");
	printf("\n\t4 - Divisão\n");
	scanf("%i", &menu);
	
	if(menu==1||menu==2||menu==3||menu==4){
		switch(menu){
			case 1:
				printf("\nResultado: %.2f", num1+num2);
				break;
			case 2:
				printf("\nResultado: %.2f", num1-num2);
				break;
			case 3:
				printf("\nResultado: %.2f", num1*num2);
				break;
			case 4:
				printf("\nResultado: %.2f", num1/num2);
				break;
		}
	}else{
		printf("\nMenu inválido!");
	}
	return 0;
}
