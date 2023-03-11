#include<stdio.h>

int main(){
	
	int sum=0, n,b;
	
	printf("Enter a nonnegative integer: ");
	scanf("%d", &n);
	
	do{  
		
		b=n%10;
		n/=10;
		sum=sum+b;
	}
	while (n>0) ;
		
	
	printf("%d", sum);
	
	return 0;	
	
} 

