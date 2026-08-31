#include <stdio.h>

int main(){
	int prime,i,div;
	
	for(i = 2;i < 101;i++){
		prime = 1;
		for(div = 2;div < i;div++){
			if(i%div == 0){
				prime = 0;
				break;
			}	
		}
		if(prime == 1){
			printf("%d\n",i);
		}
		
	}
}
