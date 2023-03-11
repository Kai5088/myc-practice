#include <stdio.h>


int main() {
	char a,b,c;
	scanf("%c", &b);
	c=b;
	while (b!= ' '){
		scanf("%c", &b);
	}
	scanf("%c", &a);
	while (a!='\n'){
		printf("%c", a);
		scanf("%c", &a);
	}
	printf(", %c.", c);
	return 0;
}
