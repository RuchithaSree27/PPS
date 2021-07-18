/*Biggest of 3 numbers*/

#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("enter three numbers\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	if((n1 > n2) && (n1 > n3))
	{
		
	printf("%d is a biggest number",n1);}
	
	else{
		if (n2 > n3){
			printf("%d is a biggest number",n2);}
		else{
			printf("%d is a biggest number",n3);
			
		}
		
	}
		
	

return 0;
}

