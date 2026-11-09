#include <stdio.h>
#include <math.h>
int main(){
	
	int i, num, soma =0;
	printf("Informe o numero: ");
	scanf("%d", &num);
	
	for(int j=1; j<= num ; j++){
	
	for (i=1; i<=j; i++){
		
		printf("1");
		soma += pow(10,(i-1));
	}
	if(j==num){
		break;
	}
	printf("+");
}

	printf("=%d", soma);
	return 0;
}
