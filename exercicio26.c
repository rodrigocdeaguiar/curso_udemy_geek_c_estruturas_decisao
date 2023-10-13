#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float distancia, consumo, economia;
	printf("Digite a distância, em KM: ");
	scanf("%f", &distancia);
	printf("Digite o consumo, em litros: ");
	scanf("%f", &consumo);
	economia = distancia/consumo;
	if(economia<8){
		printf("Venda o carro!");
	}else if((economia>=8)&&(economia<14)){
		printf("Econômico!");
	}else{
		printf("Super econômico!");
	}
	return 0;
}
