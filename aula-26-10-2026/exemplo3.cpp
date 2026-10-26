#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	float num1, num2, resultado;
	do {
		printf("1  - adição\n");
		printf("2  - subtração\n");
		printf("3  - sair\n");
		printf("escolha uma opcao: ");
		scanf("%d", &op);
		if( op>=1 && op<=2){
		printf("num 1: ");
		scanf("%f", &num1);
		printf("num 2: ");
		scanf("%f", &num2);}
		switch (op){
			case 1: 
				resultado = num1 + num2;
				printf("resultado: %.2f", resultado);
				break;
			case 2:
				resultado = num1 - num2;
				printf("resultado: %.2f", resultado);
				break;
			case 3:
				printf("encerrar\n");
				break;
			default:
				printf("opção invalida\n");
		} 
	} while (op!=3);
	return 0;
}
