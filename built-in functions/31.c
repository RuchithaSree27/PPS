/* Find square,cube, power,squareroot,floor,ceil of a number using built-in function*/

#include<stdio.h>
#include<math.h>
int main()
{
	int num ,c,sq,p,fl, ce;
	float squareroot;
	printf("Enter the number:");
	scanf("%d",&num);
	c = pow(num,3);
	sq = pow(num,2);
	squareroot = sqrt(num);
	p = pow(num,4);
	fl = floor(num);
	ce = ceil(num);
	printf("cube = %d  \nsquare = %d  \nsquare root = %f",c,sq,squareroot);
	printf("\n power 4 = %d \n floor = %d \n ceil = %d",p,fl,ce);
	return 0;
}
