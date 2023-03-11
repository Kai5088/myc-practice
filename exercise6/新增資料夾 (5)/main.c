#include <stdio.h>


int main() {
	int a=1,b=0;
	
	while (a!=0){
		scanf("%d", &a);
		if (a>0) {
			b=a+b;
			
			continue;
		}
		else 
		continue;
	}
	printf("%d", b);
	return 0;
}
