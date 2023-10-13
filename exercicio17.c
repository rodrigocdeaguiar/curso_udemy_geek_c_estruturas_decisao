#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float baseMenor, baseMaior, altura, area;
	printf("\nDigite a o valor da base menor do trapézio: ");
	scanf("%f", &baseMenor);
	printf("\nDigite a o valor da base maior do trapézio: ");
	scanf("%f", &baseMaior);
	printf("\nDigite a o valor da altura do trapézio: ");
	scanf("%f", &altura);
	if((baseMenor>0)&&(baseMaior>0)&&(altura>0)){
		area = ((baseMenor+baseMaior)*altura)/2;
		printf("\nÁrea: %.2f", area);
	}else{
		printf("\nValores inválidos para, no mínimo, uma das medidas do triângulo! ");
		printf("Digite valores positivos!");
	}
	return 0;
}
