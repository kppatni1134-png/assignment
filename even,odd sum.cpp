#include <stdio.h>

int main(){
	int n = 6,evensum,oddsum;
	
	for(int i = 1;i <= n;i++){
		if(i%2 == 0){
			evensum += i;	
		}else{
			oddsum += i;
		}
	}
	
	printf("evensum : %d,oddsum : %d",evensum,oddsum);
	
	return main();
}
