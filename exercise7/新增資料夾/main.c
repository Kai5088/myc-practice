#include <stdio.h>

int main(void) {
	char a;
	printf("Enter phone number: ");
	scanf("%c", &a);
	
	while (a!='\n'){
	if(a<58){
	
		printf("%c", a);scanf("%c", &a);}
	else{
		
	switch (a){
		case 'A':
		case 'B':
		case 'C':
			printf("2");
			scanf("%c", &a);break;
		case 'D':
		case 'E':
		case 'F':
		printf("3");
		scanf("%c", &a);break;
		case 'G':case 'H':case 'I':
		printf("4");
		scanf("%c", &a);break;
		case 'L':case 'J':case 'K':
		printf("5");
		scanf("%c", &a);break;
		case 'M':case 'N':case 'O':
		printf("6");
		scanf("%c", &a);break;
		case 'R':case 'S':case 'P':
		printf("7");scanf("%c", &a);break;
		case 'V':case 'T':case 'U':
		printf("8");
		scanf("%c", &a);break;
		case 'W':case 'X':case 'Y':	
		printf("9");
		scanf("%c", &a);break;
}
}
}
	return 0;
	
}
