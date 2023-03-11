#include <stdio.h>

int main() {
	int a,b;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &a,&b);
	if(a>=24){
		printf("Not the correct time format");
	}
	else if (a>12){
		a=a-12;
		printf("Equivalent 12-hour time: %d:%d PM", a, b);
	}
	else if (a==12){
		
		printf("Equivalent 12-hour time: %d:%d PM", a, b);
	}
	else if(a==0){
		printf("Equivalent 12-hour time: 12:00 AM");
	}
	else if(a<=12){
		printf("Equivalent 12-hour time: %d:%d AM", a, b);
	}
	
	return 0;
}
