#include <stdio.h>

int main (){
	
	float media, frequencia;
	media = 5;
	frequencia = 70;
	//regra: media >=7 OU frequencia >=75% --> aprovado
	//E --> &&
	//OU --> ||
	if(media >=7 && frequencia>=75){
		//aprovado
		printf("Aprovado");
	} else {
		//reprovado
		printf("Reprovado");
	}
	
	
	return 0;
}
