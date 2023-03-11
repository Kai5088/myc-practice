#include <stdio.h>


int main() {
	int a,b,i;
	scanf("%d%d", &a,&b);
	
	for (i=1;i<=a;i++){
	
	printf("%d ", i);
	if ((i+b-1)%7==0){
		printf("\n");
	}
}
	return 0;
}
