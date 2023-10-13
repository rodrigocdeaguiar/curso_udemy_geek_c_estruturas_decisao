#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tempoServico;
	float salarioInicial, salarioReajustado;
	printf("\nDigite o salário atual do funcionário: ");
	scanf("%f", &salarioInicial);
	printf("\nDigite o tempo de trabalho do funcionário, em anos: ");
	scanf("%i", &tempoServico);
	if(salarioInicial>0&&salarioInicial<=500){
		if(tempoServico<1){
			salarioReajustado = salarioInicial + (salarioInicial*0.25);
			printf("\nSalário reajustado: R$ %.2f", salarioReajustado);
		}else{
			printf("\nSem direito a aumento salarial!");
		}
	} else if(salarioInicial>500&&salarioInicial<=1000){
		if(tempoServico>=1&&tempoServico<=3){
			salarioReajustado = salarioInicial + (salarioInicial*0.2)+100;
			printf("\nSalário reajustado: R$ %.2f", salarioReajustado);
		} else{
			printf("\nSem direito a aumento salarial!");
		}
	} else if(salarioInicial>1000&&salarioInicial<=1500){
		if(tempoServico>=4&&tempoServico<=6){
			salarioReajustado = salarioInicial + (salarioInicial*0.15)+200;
			printf("\nSalário reajustado: R$ %.2f", salarioReajustado);
		} else{
			printf("\nSem direito a aumento salarial!");
		}
	} else if(salarioInicial>1500&&salarioInicial<=2000){
		if(tempoServico>=7&&tempoServico<=10){
			salarioReajustado = salarioInicial + (salarioInicial*0.1)+300;
			printf("\nSalário reajustado: R$ %.2f", salarioReajustado);
		} else{
			printf("\nSem direito a aumento salarial!");
		}
	} else if(salarioInicial>2000){
		if(tempoServico>10){
			salarioReajustado = salarioInicial +300;
			printf("\nSalário reajustado: R$ %.2f", salarioReajustado);
		} else{
			printf("\nSem direito a aumento salarial!");
		}
	}else{
		printf("\nValor de salário inválido!");
	}
	return 0;
}
