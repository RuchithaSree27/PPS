/*Check whether the given character is alphabet or not*/
#include<stdio.h>
int main(){
	char ch;

    printf("Enter any character: ");
    
    scanf("%c",&ch);

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
	
        printf("The entered character %c is an Alphabet",ch);
	}
    else{
    	printf("The entered character %c is not Alphabet",ch);
	}
    


return 0;
}

