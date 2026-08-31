#include <stdio.h>

int main()
{
	float p,r,t,i;
	
	printf("Enter the principle amount :");
	scanf("%f",&p);
	
	printf("Enter the rate of intrest :");
	scanf("%f",&r);
	
	printf("Enter the time in years :");
	scanf("%f",&t);
	
	i = p*r*t/100;
	
	printf("intrest :%f", i);
}
