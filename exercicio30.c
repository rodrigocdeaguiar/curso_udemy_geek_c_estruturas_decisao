#include <stdio.h>
#include <locale.h>
int main(){
	float a, b, c;
	printf("\nDigite um numero: ");
	scanf("%f", &a);
	printf("\nDigite outro numero: ");
	scanf("%f", &b);
	printf("\nDigite outro numero: ");
	scanf("%f", &c);
	if (a > c && c > b){
		printf("Em ordem crescente: %.2f, %.2f, %.2f", b, c, a);
	}else if(b > a && a > c){
		printf("Em ordem crescente: %.2f, %.2f, %.2f", c, a, b);
	}else if(b > c && c > a){
		printf("Em ordem crescente: %.2f, %.2f, %.2f", a, c, b);
	}else if(c > b && b > a){
		printf("Em ordem crescente: %.2f, %.2f, %.2f", a, b, c);
	}else if(c > a && a > b){
		printf("Em ordem crescente: %.2f, %.2f, %.2f", b, a, c);
	} else{
		printf("VALORES INVALIDOS!");
	}
}
