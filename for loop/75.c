/*Program to print multiplication table of a given number. For example,
3 x 1=3
3 x 2=6
.
.
3 x 10 = 30
*/

#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number : ");
    scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	return 0;	
}
