/*Write a C program to input length in centimeter and convert it to meter and kilometer*/



#include<stdio.h>
int main(){
	int cm,m,km;
	printf("enter the value in cm:");
	scanf("%d",&cm);
	m = cm/100;
	printf("metres = %d\n",m);
	km = cm/1000;
	printf("kilometres = %d\n",km);
	
	
	
	return 0;
}
