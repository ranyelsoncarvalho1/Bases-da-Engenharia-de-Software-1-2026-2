#include <stdio.h>

int main(){
	int i, soma=0;
	for(i = 100; i>=1; i--){
		//printf("%d\n", i);
		soma +=  i;
	}
	printf("total: %d", soma);
	return 0;
}
