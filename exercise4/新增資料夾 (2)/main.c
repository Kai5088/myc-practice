#include <stdio.h>


int main() {
	int a,b,c,d,e,f;
	printf("Enter a number between 0 and 32767:");
	scanf("%d", &a);
	b=a/8/8/8/8;
	c=(a-b*8*8*8*8)/8/8/8;
	d=(a-b*8*8*8*8-c*8*8*8)/8/8;
	e=(a-b*8*8*8*8-c*8*8*8-d*8*8)/8;
	f=(a-b*8*8*8*8-c*8*8*8-d*8*8-e*8);
	printf("In octal, your number is:%d%d%d%d%d", b,c,d,e,f);
	return 0;
}
