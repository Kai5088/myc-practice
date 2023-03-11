#include <stdio.h>

void swap(int *a,int *b);

int main() {
	int d,e;
	scanf("%d%d", &d,&e);
	swap(&d,&e);
	printf("%d\n", d);
	printf("%d", e);
	return 0;
}

void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
	
}
