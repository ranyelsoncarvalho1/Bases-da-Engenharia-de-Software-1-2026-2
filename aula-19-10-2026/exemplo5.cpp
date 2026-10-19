//crie um programa que realize 
//a contagem regressiva de 10 a 1

#include <stdio.h>

int main(){
	int numero = 100;
	int soma = 0;
	while(numero >=1){
		//printf("%d\n", numero);
		//acumulador
		soma += soma + numero;
		//decremento
		numero--; //numero = numero - 1
	}
	printf("%d\n", soma);
	return 0;
}
