#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, tempoServico;
	printf("Digite a idade: ");
	scanf("%i", &idade);
	printf("Digite o tempo de servi�o e contribui��o: ");
	scanf("%i", &tempoServico);
	if((idade>=60)&&(tempoServico>=25)){
		printf("Pode se aposentar!");
	}else if(idade>=65){
		printf("Pode se aposentar!");
	}else if(tempoServico>=30){
		printf("Pode se aposentar!");
	}else{
		printf("N�o pode se aposentar!");
	}
	return 0;
}
