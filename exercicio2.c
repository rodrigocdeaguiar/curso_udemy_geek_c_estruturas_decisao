#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("\nDigite um n�mero inteiro: ");
	scanf("%i", &num);
	if(num>0){
		printf("Raiz quadrada: %.2f", sqrt(num));
	} else{
		printf("Op�ao inv�lida. N�mero negativo!");
	}
	return 0;
}
