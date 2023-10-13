#include <stdio.h>
#include <locale.h>
#define CACHORROQUENTE 20
#define BAURUSIMPLES 35
#define BAURUCOMOVO 40
#define HAMBURGER 30
#define CHEESEBURGER 35
#define SUCO 10
#define REFRIGERANTE 7


int main(){
	setlocale(LC_ALL, "Portuguese");
	int menu, quantidade;
	float pedido;
	printf("\nDigite o código do produto");
	printf("\n\t100 - Cachorro-quente");
	printf("\n\t101 - Bauru Simples");
	printf("\n\t102 - Bauro com Ovo");
	printf("\n\t103 - Hamburger");
	printf("\n\t104 - Cheeseburger");
	printf("\n\t105 - Suco");
	printf("\n\t106 - Refrigerante");
	printf("\n");
	scanf("%i", &menu);
	printf("\nDigite a quantidade: ");
	scanf("%i", &quantidade);
	switch(menu){
		case 100:
			pedido = CACHORROQUENTE*quantidade;
			printf("Total do pedido: R$ %.2f", pedido);
			break;
		case 101:
			pedido = BAURUSIMPLES*quantidade;
			printf("Total do pedido: R$ %.2f", pedido);
			break;
		case 102:
			pedido = BAURUCOMOVO*quantidade;
			printf("Total do pedido: R$ %.2f", pedido);
			break;
		case 103:
			pedido = HAMBURGER*quantidade;
			printf("Total do pedido: R$ %.2f", pedido);
			break;
		case 104:
			pedido = CHEESEBURGER*quantidade;
			printf("Total do pedido: R$ %.2f", pedido);
			break;
		case 105:
			pedido = SUCO*quantidade;
			printf("Total do pedido: R$ %.2f", pedido);
			break;
		case 106:
			pedido = REFRIGERANTE*quantidade;
			printf("Total do pedido: R$ %.2f", pedido);
			break;
		default:
			printf("Menu inválido.");
	}
	return 0;
}
