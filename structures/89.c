/*Program to read and print student details using nested structures.*/

#include<stdio.h>

    struct student{
    
		char Name[20];
		int rollno;
		struct DOB{
		
		int day;
		int month;
		int year;
	}d1,d2;
	};

int main(){
	struct student s1,s2;
	
	printf("enter name of s1\n");
	scanf("%s",&s1.Name);
	printf("enter name of s2\n");
	scanf("%s",&s2.Name);
	printf("enter roll no of s1\n");
	scanf("%d",&s1.rollno);
	printf("enter roll no of s2\n");
	scanf("%d",&s2.rollno);
	printf("enter DOB of s1\n");
	scanf("%d %d %d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
	printf("enter DOB of s2\n");
	scanf("%d %d %d",&s2.d2.day,&s2.d2.month,&s2.d2.year);
	printf("Name: %s\n",s1.Name);
	printf("roll no: %d\n",s1.rollno);
	printf("DOB: %d-%d-%d\n\n",s1.d1.day,s1.d1.month,s1.d1.year);
	
	printf("Name: %s\n",s2.Name);
	printf("roll no: %d\n",s2.rollno);
	printf("DOB: %d-%d-%d",s2.d2.day,s2.d2.month,s2.d2.year);
	
	
	
	


return 0;
}

