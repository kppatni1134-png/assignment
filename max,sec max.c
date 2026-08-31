#include <stdio.h>

int main()
{
	int numbers[5] = {10,40,100,30,20},max = 0,sec = 0;
	
	for(int i = 0;i < 6;i++){
		if(numbers[i] > max){
			sec = max;
			max = numbers[i];
		}
		else if(numbers[i] > sec && sec < max){
			sec = numbers[i];
		}
	}
	
	printf("maximum %d\n",max);
	printf("second %d",sec);
}
