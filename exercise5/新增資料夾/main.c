#include <stdio.h>


int main() {
	int a,b=0,c;
	scanf("%d", &a);
	printf("Enter a number: ");
	c=a;
	
	if (a>9999){
		printf("Please enter the whole between 1 and 9999");
	}
	else if (a>0){
		
		while (a>0){
			a=a/10;
			b++;
		}
		printf("The number %d has %d digits", c, b);
	}
	else {
		printf("Please enter the whole between 1 and 9999");
	}
	return 0;
}
