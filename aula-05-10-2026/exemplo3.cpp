#include <stdio.h>
#include <math.h> //importando uma biblioteca matemática

int main(){
	//ponto flutuante (2.26)
	float numero;
	float _numero = 25; //instanciou a variável
	float resultado; //declarou a variável
	
	resultado = sqrt(_numero);
	printf("Resultado: %.1f\n", resultado); //0.00
	
	//6.56 (certo)
	//6,56 (errado)
	
	//impressão: R$ 6.00 ou R$ 6,00
	
	
	return 0;
}
