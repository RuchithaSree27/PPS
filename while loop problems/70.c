/*To find the reverse of a given number(Egi/p 6758 o/p=8576)*/

#include<stdio.h>
int main(){
	int n, reverse=0, rem;    
	printf("Enter a number: ");    
  	scanf("%d", &n);    
  	while(n!=0)    
  	{    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  	}    
  	printf("Reversed Number: %d",reverse);   
		
		



	return 0;}
	

