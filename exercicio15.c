#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia;
	printf("\nDigite um n�mero de 1 a 7 para saber o dia da semana: ");
	scanf("%i", &dia);
	switch(dia){
		case 1:
			printf("Segunda-feira");
			break;
		case 2:
			printf("Ter�a-feira");
			break;
		case 3:
			printf("Quarta-feira");
			break;
		case 4:
			printf("Quinta-feira");
			break;
		case 5:
			printf("Sexta-feira");
			break;
		case 6:
			printf("S�bado");
			break;
		case 7:
			printf("Domingo");
			break;
		default:
			printf("Valor inv�lido");
	}
	getch();
	return 0;
}
