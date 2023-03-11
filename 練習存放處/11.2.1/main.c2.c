#include <stdio.h>
#include <stdlib.h>

void a(float b, int *c, float *d);
int main(void) {
	int g;
	float h, i=3.14159;
	
	a(3.14159,&g,&h);
	printf("%d\n%f", g,h);
	return 0;
}

void a(float b, int *c, float *d){
	
	*c=(int)b;
	*d=b-*c;
	
}

