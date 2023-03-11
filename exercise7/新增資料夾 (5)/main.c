#include <stdio.h>


int main() {
	char a,b,c;
	printf("Enter a first and last name: ");
	scanf(" %c", &a);
	c=a;
	while (a != ' ') {
        scanf("%c", &a);
    }

	scanf("%c", &b);
	while (b!='\n'){
		
		if (b!=' ')
		printf("%c", b);
		scanf("%c", &b);
	}
	printf(", %c.", c);
	
	return 0;
}
