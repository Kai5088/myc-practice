#include <stdio.h>


int main() {
	float a,b;
	char c;
	printf("Enter an expression (example: 1+2.5*3):  ");
	scanf("%f", &a);
	
	while (c!='\n'){
		scanf("%c", &c);
		if (c=='+'){
			scanf("%f", &b);
			a+=b;
			
		}
		else if (c=='-'){
			scanf("%f", &b);
			a-=b;
			
		}
		else if (c=='*'){
			scanf("%f", &b);
			a*=b;
			
		}
		else if (c=='/'){
			scanf("%f", &b);
			a/=b;
			
		}
	}
	printf("Value of expression: %.1f", a);
	return 0;
}
