/*Read 10 numbers and find the sum of negative numbers*/


#include<stdio.h>
int main(){
	int num, count = 0,sum = 0;
	do{
		printf("enter a  number: ");
		scanf("%d",&num);
		if (num < 0){
			sum += num;
		}
		count++;
	}
	while(count<10);
	printf("The sum of negative numbers is %d",sum);
	 


return 0;
}

