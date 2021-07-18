/*Check whether the given character is uppercase or lowercase alphabet*/

#include<stdio.h>
int main(){
	
	char ch;

    printf("Enter any character: ");
    
    scanf("%c",&ch);
    

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        

    	if (ch>='a' && ch<='z'){
		
        	printf("The entered character %c is lower case alphabet",ch);}
        
    	else{
    		printf("The entered character %c is upper case alphabet",ch);
		}
    }
    else{
    	printf("The entered character %c is not an alphabet",ch);
	}
	



return 0;
}

