#include <stdio.h>

int main(){
	
	int a=2,b=3,c;
	
	while(b > 0){
		c *= a;
		b--;
	}
	
	printf("%d",c);
}
