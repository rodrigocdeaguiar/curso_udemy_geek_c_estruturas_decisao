#include <stdio.h>
#include <locale.h>
#define ANOATUAL 2023

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano;
	printf("Digite o dia do m�s: ");
	scanf("%i", &dia);
	printf("Digite o m�s do ano (1 a 12): ");
	scanf("%i", &mes);
	printf("Digite ano (quatro algarismos): ");
	scanf("%i", &ano);
	if(ano>ANOATUAL){
		printf("Data inv�lida!");
	}else{
		if(mes==1||mes==3||mes==5||mes==8||mes==10||mes==12){
			if(dia>=1&&dia<=31){
				printf("\nData v�lida");
			}else{
				printf("\nData inv�lida");
			}
		}else if(mes==4||mes==6||mes==9||mes==11){
			if(dia>=1&&dia<=30){
				printf("\nData v�lida");
			}else{
				printf("\nData inv�lida");
			}
		}else if(mes==2){
			if((ano%400==0||ano%4==0)&&(ano%100!=0)){
				if(dia>=1&&dia<=29){
					printf("\nData v�lida");
			}else{
				printf("\nData inv�lida");
			}
			} else{
				if(dia>=1&&dia<=28){
					printf("\nData v�lida");
			}else{
				printf("\nData inv�lida");
			}
			}
		}else{
			printf("\nData inv�lida");
		}
	}
	return 0;
}
	
