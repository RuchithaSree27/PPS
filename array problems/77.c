//Sum and average array elements

#include<stdio.h>
int main()
{
	int A[10],i,sum=0;  
    float avg;
	printf("Enter 10 numbers\n");
	 for(i=0;i<10;i++){
	 	scanf("%d ",&A[i]);}
		                        
	for(i=0;i<10;i++)
	{
	 sum +=A[i];
	 avg = sum/10;
	}
	printf("sum is %d\n",sum);
	printf("average is %d",avg);
	return 1;
}
S
