/*Write a program that declares Class awarded for a given percentage of marks, where
 mark<40%= Failed , 40% to <60% =Second class, 60 % to70% = First class , >=70%= Distinction.
  Read percentage from standard input
*/

#include<stdio.h>
int main(){
	int marks;
	printf("enter marks percentage \n");
	scanf("%d",&marks);
	if (marks < 40){
		printf("failed",marks);}
	else if((40 < marks)&&(marks <= 60)){
	
		printf("Passed in Second class");
	}
	else if((60 < marks)&&(marks <= 70)){
		printf("Passed in First class");}
	
	else{
		printf("Passed with Distinction");
	}	
	



return 0;
}

