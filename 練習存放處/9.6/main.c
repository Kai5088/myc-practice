#include <stdio.h>
#include <stdlib.h>

int compute(int x);
int main() {
	int i,c;
	scanf("%d", &i);
	c=compute(i);
	printf("%d", c);
	return 0;
}

int compute(int x){
	int a;
	a=3*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
	return a;
}
