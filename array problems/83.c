//Read and print 2-D Array
#include<stdio.h>
int main()
{
	int A[10][10],i,r,j,c;
	printf("Enter number of rows,Number of columns of first matrix:\n");
	scanf("%d%d",&r,&c);
	printf("Enter elements in rows and columns\n");
	for(i=0;i<r;i++)
	{
    	for(j=0;j<c;j++)
    	{
    		
    		scanf("%d",&A[i][j]);
		}
    }	
		for(i=0;i<r;i++)
	{
    	    for(j=0;j<c;j++)
    	    {
    		    printf("%4d",A[i][j]);
		    }
		printf("\n");
    }
}
