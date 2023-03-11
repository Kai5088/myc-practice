#include <stdio.h>

int main (void){
 char a;
 float x,y,ans=0.0f;
 	printf("Enter an expression (example: 1+2.5*3):  ");
 	scanf("%f",&x);
 	while(1){
  	scanf("%c", &a);
  	if(a=='+'){
   	scanf("%f",&y);
  	 ans=ans+x+y;
   	x=0;
  	}
	else if(a=='-'){
   	scanf("%f",&y);
   	ans=ans+x-y;
   	x=0;
  	}
	else if(a=='*'){
   	scanf("%f",&y);
   	ans=(ans+x)*y;
   	x=0;
  	}
	else if(a=='/'){
   	scanf("%f",&y);
   	ans=(ans+x)/y;
   	x=0;
  	}
  	if(a=='\n'){
   	break;
  	}
}
	 printf("Value of expression: %.1f",ans);
 	return 0;
}
