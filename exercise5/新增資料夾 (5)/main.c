#include <stdio.h>

int main() {
	int a;
	printf("Enter a numerical grade: ");
	scanf("%d", &a);
	a=a/10;
	printf("Letter grade: ");
	switch (a) {
		case 10:
		case 9:	
			printf("A");
			break;
		case 8:	
			printf("B");
			break;
		case 7:	
			printf("C");
			break;
		case 6:	
			printf("D");
			break;
		default :
			printf("F");
			break;				
	}
	
	return 0;
}
