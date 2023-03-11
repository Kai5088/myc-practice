#include <stdio.h>


int main() {
	int i,n,d=1;
	float sum=1,a;
	scanf("%d", &n);
	for (i=1;i<=n;i++) { 
		
		d=i*d;
		a=1./d;
		
		sum=sum+a;
}
    printf("%.4f", sum) ;
	return 0;
}
