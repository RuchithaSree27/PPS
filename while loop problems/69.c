/*Count the digits of a given number*/

#include<stdio.h>
int main(){
	int i,count = 0 ;
	printf("enter a number\n");
	scanf("%d",&i);
	while(i  != 0){
		i = i/10;
		++count;
	}
	printf("\nNumber of digits: %d\n",count);

	

	
	return 0;
}

