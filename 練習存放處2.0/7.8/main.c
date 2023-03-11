#include <stdio.h>
#include <math.h>

int main() {
	
	float a,b=1,c,d,e;
	printf("Enter a positive number: \n") ;
	scanf("%f", &a);
	do {
	c=a/b;
	e=b;
	b=(c+b)/2;
	
	
	d=fabs(b-e);
	
}while (fabs(d)>0.00001);
	printf("Square root: %.5f", fabs(b));
	return 0;
}
