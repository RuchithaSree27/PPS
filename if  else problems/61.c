/*. Check whether the given character is alphabet ,digit or any other symbol.*/

#include<stdio.h>
int main(){
	char ch;
	int n;

    printf("Enter any character: ");
    
    scanf("%c",&ch);

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
	
        printf("The entered character %c is an Alphabet",ch);
	}
    else{
    	if (ch >= '0' && ch <= '9'){
			printf("The entered character %c is a  digit",ch);}
		else{
			printf("the entered character %c is a symbol",ch);
			
		}
	
    
}

return 0;
}

