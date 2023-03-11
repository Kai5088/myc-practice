#include <stdio.h>


int main() {
	int a,i=2;
	printf("Enter a number: \n");
	scanf("%d", &a);
	while (i*i<=a){
		printf("%d\n", i*i);
		i=i+2;
	}
	return 0;
}
