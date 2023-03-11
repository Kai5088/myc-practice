#include <stdio.h>


int main() {
	int a,b,rem;
	scanf("%d%d", &a, &b);
	printf("Enter two integers: ");
	while (b!=0){
		rem=a%b;
		a=b;
		b=rem;
	}
	printf("Greatest common divisor: %d", a);
	return 0;
}
