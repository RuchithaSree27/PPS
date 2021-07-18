/*Program to flip bits of a binary number*/
#include<stdio.h>
int main(){
	int num, flipped_num;
	printf("enter num\n");
	scanf("%d",&num);
	flipped_num = ~(num);
	printf("flipped number is %d",flipped_num);

 

return 0;
}

