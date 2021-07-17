/*.Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.*/


#include<stdio.h>
int main(){
	int x , hrs, min , sec;
	printf("enter integer\n");
	scanf("%d",&x);
	hrs = x/3600;
	min = (x - (hrs*3600))/60;
	sec = (x-(hrs*3600))-(min*60);
	printf("no. of hours: %d\n",hrs);
	printf("no.of minutes: %d\n",min);
	printf("no.of seconds: %d\n",sec);
	


return 0;
}

