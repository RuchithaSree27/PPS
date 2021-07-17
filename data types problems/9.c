/*	Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. 
Print the employee's ID and salary (with two decimal places) of a particular month.
*/



#include<stdio.h>
int main(){
	float weight,cost,total_weight,total_cost;
	int units;
	printf("enter no.of items purchased \n");
	scanf("%d",&units);
	printf("enter weight of each unit\n");
	scanf("%f",&weight);
	printf("enter cost of each unit\n");
	scanf("%f",&cost);
	total_weight = units*weight;
	total_cost = units*cost;
	printf("total weight is %f\n",total_weight);
	printf("total cost is %f\n",total_cost);
	
	
	
	
	
	
	
	
	
	return 0;
}
