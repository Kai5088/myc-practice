#include <stdio.h>



int main() {
	
	int i,a,b,n;
	

	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	i=1;
	while (i<=n) {
		a=i*2; b=i*3;
		printf("%10d%10d%10d\n", i, a, b);
		i++;
		
	}
	
	return 0;
}
