#include <stdio.h>
#include <locale.h>

int main(){
	float peso, altura;
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite o peso, em kg: ");
	scanf("%f", &peso);
	printf("\nDigite a altura, em cm: ");
	scanf("%f", &altura);
	if(altura<120&&altura>0){
		if(peso>0&&peso<60){
			printf("\nCategoria: A");
		}else if(peso>=60&&peso<=90){
			printf("\nCategoria: D");
		}else{
			printf("\nCategoria: G");
		}
	}else if(altura>=120&&altura<=170){
		if(peso>0&&peso<60){
			printf("\nCategoria: B");
		}else if(peso>=60&&peso<=90){
			printf("\nCategoria: E");
		}else{
			printf("\nCategoria: H");
		}
	}else{
		if(peso>0&&peso<60){
			printf("\nCategoria: C");
		}else if(peso>=60&&peso<=90){
			printf("\nCategoria: F");
		}else{
			printf("\nCategoria: I");
		}
	}
	return 0;
}
