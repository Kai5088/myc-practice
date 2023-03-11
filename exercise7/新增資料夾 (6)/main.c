#include <stdio.h>

int main (void){
 char a;
 float x,y;
 	printf("Enter an expression (example: 1+2.5*3):  ");
 	scanf("%f",&x);
 	while(1){
  	scanf("%c", &a);
  	if(a=='+'){
   	scanf("%f",&y);
  	 x=x+y;
   	
  	}
	else if(a=='-'){
   	scanf("%f",&y);
   	x=x-y;
   	
  	}
	else if(a=='*'){
   	scanf("%f",&y);
   	x=(x)*y;
   	
  	}
	else if(a=='/'){
   	scanf("%f",&y);
   	x=(x)/y;
   	
  	}
  	if(a=='\n'){
   	break;
  	}
}
	 printf("Value of expression: %.1f",x);
 	return 0;
}
