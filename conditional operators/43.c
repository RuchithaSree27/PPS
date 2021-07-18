/*Program to find maximum of three numbers using conditional operator*/
#include<stdio.h>
int main(){
	int n1,n2,n3,max_num;
	printf("enter three numbers\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	max_num = (n1 > n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
	printf("largest number is %d", max_num);
	



return 0;
}

