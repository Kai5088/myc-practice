#include <stdio.h>


int main() {
	int i=0,a,sum=0;
	
	scanf("%d", &a);
	while (i < a+1) {
	  sum=sum+i;
	  i = i +1;
	  
	}
	
	printf("%d", sum);
	return 0;
}
