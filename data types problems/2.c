/*Write a C program to compute the perimeter and area of a rectangle, Circle*/
#include<stdio.h>
int main(){
	int radius,length,breadth;
	float p1,a1,p2,a2;
	printf("enter the radius of circle\n");
	scanf("%d",&radius);
	printf("enter the length of rectangle\n");
	scanf("%d",&length);
	printf("enter the breadth of rectangle\n");
	scanf("%d",&breadth);
	p1 = 2*3.14*radius;
	a1 = 3.14 * pow(radius,2);
	p2 = 2*(length + breadth);
	a2 = length * breadth;
	printf("perimeter of circle is %f\n",p1);
	printf("area of circle is %f\n", a1);
	printf("perimeter of rectangle is %f\n",p2);
	printf("area of rectangle is %f\n", a2);



return 0;
}

