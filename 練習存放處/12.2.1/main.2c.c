#include <stdio.h>
#include <stdlib.h>



int main() {
	int *p,a[10];
	
	for(p=a;p<a+10;p++){
		scanf("%d", p);
	} 
	for(p=a+10-1;p>=a;p--){
		printf("%d ", *p);
	}
	return 0;
}
