#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite a idade: ");
	scanf("%i", &idade);
	if((idade>=5)&&(idade<=7)){
		printf("\nCategoria: Infantil A");
	}else if((idade>=8)&&(idade<=10)){
		printf("\nCategoria: Infantil B");
	}else if((idade>=11)&&(idade<=13)){
		printf("\nCategoria: Juvenil A");
	}else if((idade>=14)&&(idade<=17)){
		printf("\nCategoria: Juvenil B");
	}else if (idade>=18){
		printf("\nCategoria: Sênior");
	}else{
		printf("\nNão é possível participar");
	}
	return 0;
}
