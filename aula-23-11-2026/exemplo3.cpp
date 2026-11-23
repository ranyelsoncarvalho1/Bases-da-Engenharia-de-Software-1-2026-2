#include <stdio.h>

//procedimento (não possui retorno
void verificarAprovacao(float nota){
	if(nota>=6){
		printf("Aprovado\n");
	} else {
		printf("Reprovado\n");
	}
}
int main(){
	float nota = 10;
	verificarAprovacao(nota);	
	return 0;
}
