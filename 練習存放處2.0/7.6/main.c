#include <stdio.h>


int main() {
	float a,b,c,d;
	printf("Enter an expression (example: 1+2.5*3): \n");
	scanf("%f+%f*%f", &a, &b, &c);
	d=a*b*c;
	printf("Value of expression: %.1f", d); 
	return 0;
}

