/*Program to swap two numbers without using temperory variable.*/



#include<stdio.h>
int main(){
	int a ,b;
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("before swap a = %d b = %d",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter swap a = %d b = %d",a,b);
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
}
