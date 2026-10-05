#include <stdio.h>

int main(){
	//switch case (escolha caso) - Menu
	int dia;
	
	printf("Dia: ");
	scanf("%d", &dia);
	
	switch(dia){
		case 1:
			printf("Domingo\n");
			//lógica de negócio
			break;
		case 2:
			printf("Segunda-feira\n");
			break;
		default:
			printf("Invalido");
	}
	
	return 0;
}
