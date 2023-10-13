#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, somaCorreta, somaEstudante, contAcertos=0;
	printf("\nDigite um numero inteiro: ");
	scanf("%i", &num1);
	printf("\nDigite outro numero: ");
	scanf("%i", &num2);
	somaCorreta = num1+num2;
	printf("\nDigite a soma dos dois números: ");
	scanf("%i", &somaEstudante);
	if(somaCorreta == somaEstudante){
		printf("\nVocê acertou!");
		contAcertos+=1;
		printf("\nTotal de acertos: %i\n", contAcertos);
	}else{
		printf("\nVocê errou! Resposta correta: %i\n", somaCorreta);
		printf("\nTotal de acertos: %i\n", contAcertos);
	}
	system("pause");
	system("cls");
	printf("\nDigite um numero inteiro: ");
	scanf("%i", &num1);
	printf("\nDigite outro numero: ");
	scanf("%i", &num2);
	somaCorreta = num1+num2;
	printf("\nDigite a soma dos dois números: ");
	scanf("%i", &somaEstudante);
	if(somaCorreta == somaEstudante){
		printf("\nVocê acertou!");
		contAcertos+=1;
		printf("\nTotal de acertos: %i\n", contAcertos);
	}else{
		printf("\nVocê errou! Resposta correta: %i\n", somaCorreta);
		printf("\nTotal de acertos: %i\n", contAcertos);
	}
	system("pause");
	system("cls");
	printf("\nDigite um numero inteiro: ");
	scanf("%i", &num1);
	printf("\nDigite outro numero: ");
	scanf("%i", &num2);
	somaCorreta = num1+num2;
	printf("\nDigite a soma dos dois números: ");
	scanf("%i", &somaEstudante);
	if(somaCorreta == somaEstudante){
		printf("\nVocê acertou!");
		contAcertos+=1;
		printf("\nTotal de acertos: %i\n", contAcertos);
	}else{
		printf("\nVocê errou! Resposta correta: %i\n", somaCorreta);
		printf("\nTotal de acertos: %i\n", contAcertos);
	}
	system("pause");
	system("cls");
	printf("\nDigite um numero inteiro: ");
	scanf("%i", &num1);
	printf("\nDigite outro numero: ");
	scanf("%i", &num2);
	somaCorreta = num1+num2;
	printf("\nDigite a soma dos dois números: ");
	scanf("%i", &somaEstudante);
	if(somaCorreta == somaEstudante){
		printf("\nVocê acertou!");
		contAcertos+=1;
		printf("\nTotal de acertos: %i\n", contAcertos);
	}else{
		printf("\nVocê errou! Resposta correta: %i\n", somaCorreta);
		printf("\nTotal de acertos: %i\n", contAcertos);
	}
	system("pause");
	system("cls");
	printf("\nDigite um numero inteiro: ");
	scanf("%i", &num1);
	printf("\nDigite outro numero: ");
	scanf("%i", &num2);
	somaCorreta = num1+num2;
	printf("\nDigite a soma dos dois números: ");
	scanf("%i", &somaEstudante);
	if(somaCorreta == somaEstudante){
		printf("\nVocê acertou!");
		contAcertos+=1;
		printf("\nTotal de acertos: %i\n", contAcertos);
	}else{
		printf("\nVocê errou! Resposta correta: %i\n", somaCorreta);
		printf("\nTotal de acertos: %i\n", contAcertos);
		printf("\nObrigado por jogar o Jogo da Soma!");
	}
	return 0;	
}
