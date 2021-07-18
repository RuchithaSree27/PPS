/*Print alphabets from a to z*/

#include<stdio.h>
int main(){
	char i = 'A';
	printf("The Alphabets from A to Z are: \n");
 
    do {
    
    	printf("%c ", i);
    	i++;
        
	}while(i <= 'Z');
    
   


	return 0;
	}

