#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	float valor, saldo=0;
	do{
		printf("1  - deposito\n");
		printf("2  - saque\n");
		printf("3  - consultar saldo\n");
		printf("4  - sair\n");
		printf("escolha uma opcão: ");
		scanf("%d", &op);
		switch (op){
			case 1:
				printf("deposito\n");
				printf("informe o valor: ");
				scanf("%f", &valor);
				if(valor<0){
					printf("informe um valor válido\n");
				} else {
					saldo+=valor;
					printf("saldo: %.2f\n", saldo);	
				}
				break;
			case 2:
				printf("saque\n");
				printf("informe o valor: ");
				scanf("%f", &valor);
				if (valor <= 0) {
					printf("saque inválido\n");
				} else if (valor > saldo) {
					printf("saldo insuficiente\n");
				} else {
					saldo -= valor;
					printf("Saldo: %.2f\n", saldo);		
				}
				break;
			case 3:
				printf("consultar saldo\n");
				printf("saldo: %.2f\n", saldo);
				break;
			case 4:
				printf("encerrar\n");
				break;
			default:
				printf("opção inválida\n");
		}
	}while (op!=4);
	
	return 0;
}

