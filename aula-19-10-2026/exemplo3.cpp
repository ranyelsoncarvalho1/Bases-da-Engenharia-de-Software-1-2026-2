#include <stdio.h> 

int main(){
	int senha;
	printf("Informe a senha: ");
	scanf("%d", &senha);
	while (senha != 1234){ //enquanto
		printf("Senha incorreta. Informe a senha: ");
		scanf("%d", &senha);
	}
	printf("Acesso OK");
	return 0;
}
