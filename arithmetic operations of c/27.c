/*Program to find sum of n integers Eg: sum of 10 integers=1+2+3+4+…….10=55*/
#include<stdio.h>
int main(){
	int n,i = 1, sum = 0;
	printf("enter n value\n");
	scanf("%d",&n);
	while (i<=n){
		sum += i;
		i = i + 1;
    }
    printf("%d",sum);


return 0;
}

