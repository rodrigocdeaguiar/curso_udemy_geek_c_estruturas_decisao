#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float baseMenor, baseMaior, altura, area;
	printf("\nDigite a o valor da base menor do trap�zio: ");
	scanf("%f", &baseMenor);
	printf("\nDigite a o valor da base maior do trap�zio: ");
	scanf("%f", &baseMaior);
	printf("\nDigite a o valor da altura do trap�zio: ");
	scanf("%f", &altura);
	if((baseMenor>0)&&(baseMaior>0)&&(altura>0)){
		area = ((baseMenor+baseMaior)*altura)/2;
		printf("\n�rea: %.2f", area);
	}else{
		printf("\nValores inv�lidos para, no m�nimo, uma das medidas do tri�ngulo! ");
		printf("Digite valores positivos!");
	}
	return 0;
}
