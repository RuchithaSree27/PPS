/*Program to check whether the entered character is digit or not using conditional operator*/


#include<stdio.h>
int main(){
	int num,digit;
	printf("enter a number\n");
	scanf("%d",&num);
	digit =	(num<=9)? printf("%d is a digit\n",num):printf("%d is not a digit",num);



return 0;
}

