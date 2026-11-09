#include <stdio.h>

int main(){
	//break e continue
	for(int i=1; i<=10;i++){
		if(i == 6){
			break;
			//continue;
		}
		printf("%d\n", i);
	}
	return 0;
}
