#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float media;
	
	printf("Média: ");
	scanf("%f", &media);
	
	//condicional encadeado
	if(media>=7){
		printf("Aprovado\n");
	} else if (media >=5){
		printf("Recuperação\n");
	} else {
		printf("Reprovado\n");
	}
}
