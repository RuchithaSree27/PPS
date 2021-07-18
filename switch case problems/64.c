/*65.Write a C program, which takes two integer operands and one operator from the user, 
performs the operation and then prints the result. */
#include<stdio.h>
int main(){
	int a,b;
	char ch;
	//printf("enter operands\n");
	//scanf("%d %d",&a,&b);
	printf("enter operator\n");
	scanf("%c",&ch);
	printf("enter operands\n");
	scanf("%d %d",&a,&b);
	
	switch(ch)
	{
		case '+' : printf("%d+%d = %d",a,b, a+b);
			break;
		case '-' : printf("%d-%d = %d",a,b, a-b);
			break;
		case '*' : printf("%d*%d = %d", a,b,a*b);
			break;
		case '/' : printf("%d/%d = %d", a,b,a/b);
			break;
		case '%' : printf("%d" ,a%b);
			break;
	}



return 0;
}

