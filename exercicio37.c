#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valorHora, valorFinal, tempoMin, tempoHora, tempoSeg, tempoMin, horaEntrada, minutoEntrada, segundosEntrada, horaSaida, minutoSaida, segundosSaida, convEntrada, convSaida;
	printf("\nDigite o horário, em horas, minutos, segundos, de entrada.");
	printf("\nHoras: ");
	scanf("%f", &horaEntrada);
	printf("\nMinutos: ");
	scanf("%f", &minutoEntrada);
	printf("\nSegundos: ");
	scanf("%f", &segundosEntrada);
	system("cls");
	printf("\nDigite o horário, em horas, minutos, segundos, de saída.");
	printf("\nHoras: ");
	scanf("%f", &horaSaida);
	printf("\nMinutos: ");
	scanf("%f", &minutoSaida);
	printf("\nSegundos: ");
	scanf("%f", &segundosSaida);
	system("cls");
	convEntrada = segundosEntrada + (horaEntrada*60*60) + (minutoEntrada*60);
	convSaida = segundosSaida + (horaSaida*60*60) + (minutoSaida*60);	
	if(convEntrada < convSaida){
		tempoSeg = convSaida-convEntrada;
	}else{
		tempoSeg = 864000-convEntrada+convSaida;
	}
	printf("%f", tempoSeg);
	tempoMin = tempoSeg/60;
	tempoHora = tempoMin/60;
	tempoHora = ceil(tempoHora);
	if(tempoHora==1||tempoHora==2){
		valorHora = 1;
	}else if(tempoHora==3||tempoHora==4){
		valorHora = 1.4;
	}else{
		valorHora = 2;
	}
	valorFinal = valorHora*tempoHora;
	printf("\nValor Final: R$ %.2f", valorFinal);
}
