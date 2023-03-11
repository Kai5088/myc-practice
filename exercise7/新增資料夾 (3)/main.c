#include <stdio.h>


int main() {
	int b,c;
	char a;
	printf("Enter a 12-hour time (hours:minutes AM/PM): ");
	scanf("%d:%d %c", &b,&c,&a);
	printf("Equivalent 24-hour time: ");
	if (a=='A'||a=='a')
	printf("%02d:%02d", b,c);
	else if(b==12)
	printf("%02d:%02d", b,c);
	else {
	b+=12;
	printf("%d:%02d", b,c);
}	
	return 0;
}
