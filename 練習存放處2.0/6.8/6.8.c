#include<stdio.h>

int main(){
	
	int n,a=0;
	
	printf("Enter a nonnegative integer: ");
	scanf("%d", &n);
	
	while (n>0){
		n=n/10;
		a++;
			
	}
		
	
	printf("The number has %d digit(s).", a);
	
	return 0;	
	
} 

