#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int menu;
	float num1, num2;
	printf("\nDigite um n�mero inteiro: ");
	scanf("%f", &num1);
	printf("\nDigite outro n�mero inteiro: ");
	scanf("%f", &num2);
	printf("\nDigite um dos n�meros para escolher umas das opera��es matem�ticas:");
	printf("\n\t1 - Adi��o");
	printf("\n\t2 - Subtra��o");
	printf("\n\t3 - Multiplica��o");
	printf("\n\t4 - Divis�o\n");
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
		printf("\nMenu inv�lido!");
	}
	return 0;
}
