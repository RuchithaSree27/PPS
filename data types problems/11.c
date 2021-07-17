/*Write a C program to read two co-ordinate points and calculate the distance between the two points.*/



#include<stdio.h>
#include<math.h>
int main()
{
int x1,y1,x2,y2,dis;
printf("enter 1st coordinates\n");
scanf("%d %d",&x1,&y1);
printf("enter 2nd coordinates\n");
scanf("%d %d", &x2,&y2);
dis = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
printf("enter the distance between 2 points is %d",dis);

}
