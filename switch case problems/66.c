/*Write a C program, which takes a character  (F or M) from the user and prints the Gender as Male or Female*/
#include<stdio.h>
int main(){
	char c;
	printf("enter a character(M/F)\n");
	scanf("%c",&c);
	switch(c){
		
		case('M'): printf("Gender is Male\n");
			break;
		case('F'): printf("Gender is Female");
			break;
					
	}
	



return 0;
}

