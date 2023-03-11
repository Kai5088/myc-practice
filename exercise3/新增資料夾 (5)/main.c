#include <stdio.h>

int main() {
	int a,b,c,d,e,f;
	scanf("%d/%d+%d/%d", &a,&b,&c,&d);
	
	
	e=a*d+c*b;
	f=b*d;
	
	printf("The sum is %d/%d", e,f); 
	return 0;
}
