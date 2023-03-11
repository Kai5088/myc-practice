#include <stdio.h>


int main() {
	int a,i=1;
	printf("Enter number of entries in table: ");
	scanf("%d", &a);
	while (i<=a){
		printf("%10d%10d%10d\n", i, 2*i, 3*i);
		i++;
	}
	return 0;
}
