#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//switch case (escolha caso) - Menu
	float n1, n2, resultado;
	int op;
	
	printf("Num1: ");
	scanf("%f", &n1);
	
	printf("Num2: ");
	scanf("%f", &n2);
	
	printf("Menu: 1 - Add; 2 - Sub; 3 - Mult; 4 - Div: ");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			resultado = n1 + n2;
			printf("Resultado: %f", resultado);
			break;
		case 2:
			resultado = n1 - n2;
			printf("Resultado: %f", resultado);
			break;
		case 3:
			resultado = n1 * n2;
			printf("Resultado: %f", resultado);
			break;
		case 4:
			if(n2==0){
				printf("Não pode realizar a divisão por zero");
				break;	
			} else {
				resultado = n1 / n2;
				printf("Resultado: %f", resultado);
				break;	
			}
		default:
			printf("Inválido");
	}
	
	return 0;
}
