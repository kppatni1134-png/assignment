#include <stdio.h>

int main(){
	
	int second,minut,hour;
	
	printf("enter the second :");
	scanf("%d",&second);
	
	if(second >= 3600){
		hour = second/3600;
	}else{
		hour = 0;
	}
	
	int hour_left = second % 3600;
	
	if(second >= 60){
		minut = hour_left/60;
	}else{
		minut = 0;
	}
	
	second = hour_left%60;
	
	printf("%d : %d : %d\n",hour,minut,second);
	
	return main();
}
