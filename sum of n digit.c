#include <stdio.h>

int main()
{
	int num,sum = 0;
	
	printf("enter the number :");
	scanf("%d",&num);
	
	while(num > 0){
		sum += num;
		num--;
	}
	
	printf("%d\n",sum);
	
	return main();
}
