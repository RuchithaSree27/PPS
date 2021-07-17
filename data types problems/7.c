/*Write a C program that accepts 3 integers from the user 
and calculate the sum  ,Product  average of these  3 integers
*/#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("enter 3 numbers\n");
	scanf("%d %d %d", &n1 ,&n2,&n3);
	printf("sum is %d\n", n1+n2+n3);
	printf("product is %d\n", n1*n2*n3);
	printf("average is %f", n1+n2+n3/3.0 );



return 0;
}

