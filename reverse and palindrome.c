#include <stdio.h>
int main(){
    int num;
    int reverse;
    reverse = 0;

    printf("enter the num :");
    scanf("%d",&num);
    int num2 = num;

    while(num != 0){
        int digit = num % 10;
        reverse = reverse*10 + digit;
        num = num/10;
    }

    printf("%d\n",reverse);

    if(num2 == reverse){
        printf("polindrome");
    }
    else{
        printf("none polindrome");
    }
    return 0;
}