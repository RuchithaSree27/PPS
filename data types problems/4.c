/*Write a C program to find Simple Interest.*/
#include<stdio.h>
int main(){
	int p,t,r;
	printf("enter principal amount\n");
	scanf("%d",&p);
	printf("enter time period\n");
	scanf("%d",&t);
	printf("enter interest rate\n");
	scanf("%d",&r);
	printf("simple interest is %f",p*t*r/100.0);


return 0;
}

