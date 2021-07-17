/*Program to input two angles from user and find third angle of the triangle*/
#include<stdio.h>
int main(){
	int angle1,angle2;
	printf("enter first angle of a triangle\n");
	scanf("%d",&angle1);
	printf("enter second angle of a triangle\n");
    scanf("%d", &angle2);
    printf("third angle is %d", 180-(angle1+angle2));

return 0;
}

