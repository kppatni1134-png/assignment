#include <stdio.h>

int main(){
	float c,f;
	
	printf("Tempreture (in Celcius) :");
	scanf("%f",&c);
	
	f = 1.8*c + 32;
	
	printf("Tempreture (in Feranhit) : %f\n",f);
	
	return main();
}
