#include<stdio.h>
int main(){
	int i = 5;
	float f = 5;
	long l = 5;
	double d = 5;
	long double ld;
	printf("%d\n",sizeof(i));
	printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(l));	
	printf("%d\n",sizeof(d));
	printf("%d\n",sizeof(ld));
	printf("%d\n%f\n%l\n%d\n%ld", i,f,l,d,ld);
	
	
	
	
	
	return 0;
}
