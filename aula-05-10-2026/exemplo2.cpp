#include <stdio.h>

int main(){
	/*
		calcule a idade de uma pessoa: anoNascimento
	*/
	
	//linguagem fortemente tipada
	int anoAtual = 2026;
	int anoNascimento; //formato
	int idade;
	
	//leitura dos dados
	printf("Informe o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	//processamento (lógica de negócio)
	idade = anoAtual - anoNascimento; 
	
	//saída dos dados
	printf("Idade: %d\n", idade);
	return 0;
}
