/*8.Program to toggle LSB of a number*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num & 1 == 0)                              //num is 0
	printf("\n After toggling %d",num|1);          
	else                                          //num is 1
	printf("\n After toggling %d",num^1);               
	return 0;
}

