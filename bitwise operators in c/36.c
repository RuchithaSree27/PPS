/*Program to input any number from user and check whether the Least Significant Bit (LSB) 
of the given number is set (1) or not (0).*/
#include<stdio.h>
int main(){
	unsigned int num;
	printf("enter the number\n ");
	scanf("%d",&num);
	if (num & 1 == 1){
		printf("LSB of  %d is set(1)",num);
	}
	else{
		printf("LSB of %d is not set(0)",num);
	}
	
	



return 0;
}

