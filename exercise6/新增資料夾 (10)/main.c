#include <stdio.h>

int main() {
	int a=0,n,i=1;
	scanf("%d", &n);
	while (i<=n){
		a+=i;
		i++;
	}
	printf("%d", a);
	return 0;
}
