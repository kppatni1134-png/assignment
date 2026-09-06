#include <stdio.h>

int main(){
	int num;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	if(num%2 == 0){
		printf("%d is Even Number\n",num);
	}else{
		printf("%d is Odd Number\n",num);
	}
	
	return main();
}
