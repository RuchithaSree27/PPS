/*Program to read basic salary,Percentage (%)of DA,% of HRA (in basic salary) and calculate Net salary*/

#include<stdio.h>
int main(){
	long id;
	float hours,salary,wage;
	printf("enter employee id\n");
	scanf("%ld",&id);
	printf("enter worked hours\n");
	scanf("%f",&hours);
	printf("enter wages per hour\n");
	scanf("%f",&wage);
	salary= hours*wage;
	printf("salary = %2f",salary);
	
	
	
	
	
	
	
	
	
	return 0;
}
