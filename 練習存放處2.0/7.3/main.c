#include <stdio.h>

int main() {
	int a ,b, d;
	char c;
	
	printf("Enter a 12-hour time (hours:minutes AM/PM):\n");
	scanf("%2d:%2d %c", &a, &b, &c);
	switch (c) {
		case 'A':
		case 'a':
			printf("Equivalent 24-hour time: %02d:%02d", a, b);
			break;
		case 'P':
		case 'p':
			d=a+12;
			if (d>23){
				printf("Equivalent 24-hour time: %02d:%02d", a, b);
				break;
			}
			printf("Equivalent 24-hour time: %02d:%02d", d, b);
			break;	
		
	}
	return 0;
}
