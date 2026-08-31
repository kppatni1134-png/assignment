#include <stdio.h>

int main(){
	
	int a,i;
	
	printf("Enter the number :");
	scanf("%d",&a);
	
	for(i = 1;i < 11;i++){
		a = a*i;
		printf("%d\n",a);
		a = a/i;
	}
	
	return main();
}
