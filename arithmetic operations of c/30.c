/*. Program to find roots of a Quadratic Equation*/
#include<stdio.h>
#include<math.h>
void main(){
	
	int a,b,c,disc,x,y;
	float root1,root2;
	scanf("%d %d %d",&a,&b,&c);
	disc = b*b-4*a*c;
	
	if (disc > 0)
	{
		printf("the roots are real\n");
		root1 = (-b + sqrt(disc))/(2*a);
		root2 = (-b - sqrt(disc))/(2*a);
		printf("root1 = %f\n", root1);
		printf("root2 = %f\n",root2);
	}
	
	else if (disc ==0)
	{
		printf("the roots are equal\n");
		root1 = -b/(2*a);
		root2 =  root1;
		printf("root1 = %f\n", root1);
		printf("root2 = %f\n",root2);
	}
		
	else
	{
		printf("the roots are imaginary\n");
		x = -b/(2*a);
		y = sqrt(disc)/(2*a);
		printf("root1 = %f+i%f\n", x,y);
		printf("root2 = %f-i%f\n", x,y);
	}	



getch();
}

