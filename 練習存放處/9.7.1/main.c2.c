#include <stdio.h>
#include <stdlib.h>

int re(int n);

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", re(a));
	return 0;
}

int re(int n){
	if(n==1){
		return n;
	}
	else
	return n*re(n-1);
	
}



