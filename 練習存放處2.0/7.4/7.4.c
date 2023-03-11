#include <stdio.h>

#define STRLEN  20

int main(void) {
    int sum=0;
	char a;
	
	printf("Enter a sentence: ");
	scanf("%c", &a);
	while (a != '\n') {
	switch (a){
		case 'a':
		case 'A':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		sum=sum+1;
		scanf("%c", &a);
		break;	
		default:
		scanf("%c", &a);	
		break;
}
}
		printf("Your sentence contains %d vowels.", sum);
    return 0;
}
