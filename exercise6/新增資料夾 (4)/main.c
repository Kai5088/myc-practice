#include <stdio.h>


int main() {
	int m,n,rem,a,b;
	printf("Enter a fraction (x/y): ");
	scanf("%d/%d", &m,&n);
	a=m;
	b=n;
	
	while (n!=0){
		rem=m%n;
		m=n;
		n=rem;
	}
	printf("GCD = %d\n", m);
	a=a/m;
	b=b/m;
	printf("In lowest terms: %d/%d", a,b);
	return 0;
}
