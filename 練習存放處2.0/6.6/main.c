#include <stdio.h>


int main() {
	int a,sum=0;
	
	printf("Enter integers (0 to terminate): ");
	scanf("%d", &a);
	while (a!=0) {
		sum=sum+a;
		scanf("%d", &a);
	}
	printf("The sum is: %d\n", sum);
	return 0;
}
