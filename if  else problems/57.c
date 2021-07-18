/*find biggest of 2 numbers.*/

#include<stdio.h>
int main(){
	int n1,n2;
	printf("enter two numbers\n");
	scanf("%d %d",&n1,&n2);
	if (n1 > n2){
		printf("%d is biggest number \n",n1);
	}
	else{
		printf("%d is biggest number", n2);
	}
	



return 0;
}

