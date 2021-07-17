/*6.	Write a C program to convert specified days into years, weeks and days.     Note: Ignore leap year.*/
#include<stdio.h>
int main(){
	int x,years,months,days;
	scanf("%d",&x);
	years = x/365;
	months = (x-(years*365))/30;
	days = (x-(years*365))%30;
	printf("years = %d months = %d days = %d",years,months,days);
	
	
	
	
	return 0;
}
