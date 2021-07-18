/*check whether number is even or odd.*/

#include<stdio.h>
int main(){
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if (num % 2 == 0){
		printf("%d is  a even number\n",num);
	}
	else{
		printf("%d is a odd number",num);
	}



return 0;
}

