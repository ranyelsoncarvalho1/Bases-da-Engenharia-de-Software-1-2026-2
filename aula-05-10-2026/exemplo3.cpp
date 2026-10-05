#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	printf("Num1 : ");
	scanf("%f", &num1);
	printf("Num2 : ");
	scanf("%f", &num2);
	
	//condição composta e encadeada
	if(num1 > num2){
		printf("Num 1 é maior");
	} else if (num1 < num2){
		printf("Num 2 é maior");
	} else {
		printf("São iguais");
	}
}
