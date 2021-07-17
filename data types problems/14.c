/*Write a C program to convert a given integer (in days) to years, months and days,  
assumes that all months have 30 days and all years have 365 days.*/



#include<stdio.h>
int main(){
	int x,days,years,months;
	printf("enter input\n");
	scanf("%d",&x);
	years = x/365;
	months =( x -(years*365))/30;
	days = (x-(years*365))%30;
	printf("years = %d\nmonths = %d\ndays = %d",years,months,days);
	
	
	
	
	
	
	return 0;
}
