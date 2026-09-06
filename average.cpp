#include <stdio.h>

int main(){
	int s1,s2,s3,s4,s5,sum,avg;
	
	printf("Subject 1\n");
	scanf("%d",&s1);
	
	printf("Subject 2\n");
	scanf("%d",&s2);
	
	printf("Subject 3\n");
	scanf("%d",&s3);
	
	printf("Subject 4\n");
	scanf("%d",&s4);
	
	printf("Subject 5");
	scanf("%d",&s5);
	
	sum = s1+s2+s3+s4+s5;
	
	avg = sum/5;
	
	printf("Average = %d",avg);
	
}
