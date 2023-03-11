#include <stdio.h>



int main(void) {
    int sum=0;
	char a;
	printf("Enter a word:\n");
	scanf("%c", &a);
	while (a != '\n') {
	switch (a) {
		
		
		case 'D':case 'G':case 'd':case 'g':
			sum=sum+2;
			scanf("%c", &a);
			break;
		case 'M':case 'B':case 'C':case 'P':case 'm':case 'b':case 'c':case 'p':
			sum=sum+3;
			scanf("%c", &a);
			break;
		case 'F':case 'H':case 'V':case 'W':case 'Y':case 'f':case 'h':case 'v':case 'w':case 'y':		
			sum=sum+4;
			scanf("%c", &a);
			break;
		case 'K':case 'k':
			sum=sum+5;
			scanf("%c", &a);
			break;
		case 'J':case 'X':case 'j':case 'x':
			sum=sum+8;
			scanf("%c", &a);
			break;
		case 'Q':case 'Z':case 'q':case 'z':
			sum=sum+10;
			scanf("%c", &a);
			break;
		default:
		sum=sum+1;
		scanf("%c", &a);
		break;		
	}
}
	printf("Scrabble value: %d", sum);
	return 0; 
	} 
   
