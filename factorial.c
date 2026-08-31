#include <stdio.h>

int main()
{
	int num,factorial = 1;
	
	printf("enter the number :");
	scanf("%d",&num);
	
	while(num > 0){
		factorial *= num;
		num -= 1;
	}
	
	printf("Factorial : %d\n",factorial);
	return main();
}
