#include <stdio.h>

int main(){
	
	int a,i,c;
	
	printf("Enter the number :");
	scanf("%d",&a);
	
	for(i = 0;i < 11;i++){
		c = i*a;
		printf("%d x %d = %d\n",a,i,c);
	}
	
	return main();
}
