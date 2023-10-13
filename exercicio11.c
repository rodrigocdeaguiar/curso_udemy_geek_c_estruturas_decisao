#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	int numero, soma = 0, digito;

    printf("Digite um n�mero inteiro maior que 0: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("N�mero inv�lido.\n");
        return 1; // Termina o programa com c�digo de erro
    }

    while (numero > 0) {
        digito = numero % 10; // Pega o �ltimo d�gito do n�mero
        soma += digito;      // Adiciona o d�gito � soma
        numero /= 10;        // Remove o �ltimo d�gito do n�mero
    }

    printf("A soma dos algarismos �: %d\n", soma);

    return 0;
}
