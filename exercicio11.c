#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	int numero, soma = 0, digito;

    printf("Digite um número inteiro maior que 0: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Número inválido.\n");
        return 1; // Termina o programa com código de erro
    }

    while (numero > 0) {
        digito = numero % 10; // Pega o último dígito do número
        soma += digito;      // Adiciona o dígito à soma
        numero /= 10;        // Remove o último dígito do número
    }

    printf("A soma dos algarismos é: %d\n", soma);

    return 0;
}
