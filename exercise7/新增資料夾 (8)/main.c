#include <stdio.h>
#include <math.h>



int main() {
	float a,b=1,c,d;
	printf("Enter a positive number: \n") ;
	scanf("%f", &a);
	do {
	c=a/b;
	b=(c+b)/2;
	d=fabs(c-b);
}while (d>0.00001);
	printf("Square root: %.5f", b);
	return 0;
}
