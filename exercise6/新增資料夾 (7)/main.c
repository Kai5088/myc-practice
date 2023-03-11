#include <stdio.h>


int main() {
	float a,b=1,i,c=1;
	scanf("%f", &a);
	for (i=1;i<=a;i++){
	c=c*i;
	b=b+1/c;
}
	printf("%.4f", b);
	return 0;
}
