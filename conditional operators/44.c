/*. Program to find maximum of four numbers using conditional operator*/
#include<stdio.h>
int main(){
	int a,b,c,d,max_num;
	printf("enter four numbers\n");
	scanf("%d %d %d %d", &a ,&b ,&c ,&d);
	max_num = (a>b)?((a>c)?((a>d)?a:d):((c>d)?c:d)):((b>c)?((b>d)?b:d):((c>d)?c:d));
	printf("largest  number is %d",max_num);
	
	



return 0;
}

