#include <stdio.h>


int main() {
	int a,sum=0;
	scanf("%d", &a);
	printf("Enter integers (0 to terminate): The sum is: ");
	while (a!=0){
		sum+=a;
		scanf("%d", &a);
	}
	printf("%d\n", sum);
	
	return 0;
}
