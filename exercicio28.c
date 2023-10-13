#include <stdio.h>
#include <locale.h>
#include <math.h>

//Código com problema!

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x, y, z;
	float aritmetica, ponderada, geometrica, harmonica;
	printf("\nDigite um numero: ");
	scanf("%i", &x);
	printf("\nDigite outro numero: ");
	scanf("%i", &y);
	printf("\nDigite outro numero: ");
	scanf("%i", &z);
	if((x>0)&&(y>0)&&(z>0)){
		aritmetica = (x+y+z)/3;
		geometrica = pow((x*y*z), 1.0/3.0);
		harmonica = 1/((1/x)+(1/y)+(1/z));
		ponderada = (x+2*y+3*z)/6;
		printf("Média aritmética: %.1f", aritmetica);
		printf("Média geométrica: %.1f", geometrica);
		printf("Média harmonica: %.1f", harmonica);
		printf("Média ponderada: %.1f", ponderada);
	}else{
		printf("\nValores inválidos!");
	}
	return 0;
}
