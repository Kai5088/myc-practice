#include <stdio.h>

int main() {
	int i=1,j=1,a;
	scanf("%d", &a);
	for (j=1;j<=a-1;j++){
		for(i=1;i<=j;i++){
		printf("*");
	}
	printf("\n");
	}
	for (j=1;j<=a;j++){
		printf("*");
	}
	return 0;
}
