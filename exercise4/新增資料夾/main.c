#include <stdio.h>

int main() {
	int a,b,c,d;
	printf("Enter a three-digit number:");
	scanf("%d", &a);
	b=a%10;
	c=a/10%10;
	d=a/100%10;
	printf("The reversal is %d %d %d", b,c,d);
	return 0;
}
