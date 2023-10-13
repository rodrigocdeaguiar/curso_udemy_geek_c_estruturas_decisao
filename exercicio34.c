#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota;
	int faltas;
	char conceito;
	printf("\nDigite a nota: ");
	scanf("%f", &nota);
	printf("\nDigite número de faltas: ");
	scanf("%i", &faltas);
	if(nota<0||nota>10||faltas<0){
		printf("\nNota e/ou faltas inválidos!");
		return 0;
	}else if(nota<=10&&nota>=9){
		if(faltas<20){
			conceito = 'A';
		}else{
			conceito = 'B';
		}
	}else if(nota<=8.9&&nota>=7.5){
		if(faltas<20){
			conceito = 'B';
		}else{
			conceito = 'C';
		}
	}else if(nota<=7.4&&nota>=5){
		if(faltas<20){
			conceito = 'C';
		}else{
			conceito = 'D';
		}
	}else if(nota<=4.9&&nota>=4){
		if(faltas<20){
			conceito = 'D';
		}else{
			conceito = 'E';
		}
	}else{
		if(faltas<20){
			conceito = 'E';
		}else{
			conceito = 'E';
		}
	}
	printf("\nConceito: %c", conceito);
	return 0;
}
