/*Program to print the number excluding its last two digits 
           Eg I/P =  1234 O/P =12    */

#include<stdio.h>
int main(){
	int num1,remove_two_digits;
	printf("enter num1 value\n");
	scanf("%d",&num1);
	remove_two_digits = num1 / 100;
	printf("%d",remove_two_digits);

	return 0;
}
