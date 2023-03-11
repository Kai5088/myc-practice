#include <stdio.h>

int main() {
	int i,b,c;
	
	scanf("%d", &b);
	
	i=2;
	c=i*i+4*i+4;
	while(c<=b){
	
	printf("%d\n", i*i);
	i=i+2;
	c=i*i+4*i+4;	
}
	
	printf("%d", i*i);
	
	
return 0;
}
