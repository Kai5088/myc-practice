#include <stdio.h>
#include <stdlib.h>


char swap(int c);
int main() {
	int a;
	scanf("%d", &a);
	printf("%c", swap(a));
	return 0;
}

char swap(int c){
	int i,j;
	for (i=0;c>i;i++){
		printf("\n");
		for (j=0;c>j;j++){
			printf("*");
		}
	}
}
