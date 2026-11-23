#include <stdio.h>

float dobrar(float numero); //prototipo
//função
int somar(int a, int b){
	return a + b;
}

int main(){ //função
	//lógica de negócio aqui...
	int resultado;
	
	//chamar a função
	resultado = somar(10, 20);
	printf("Soma: %d\n", resultado);
	resultado = somar(5,10);
	printf("Soma: %d\n", resultado);
	resultado = dobrar(2);
	printf("Dobro: %d\n", resultado);
	return 0;
}

float dobrar(float numero){
	return numero * 2;
}
