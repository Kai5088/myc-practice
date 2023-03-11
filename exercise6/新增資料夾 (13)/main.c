#include <stdio.h>

int main() {
	int a,b=0;
	scanf("%d", &a);
	while (a!=0){
		b+=a%10;
		a/=10;
	}
	printf("Enter a nonnegative integer: %d", b);
	return 0;
}
