#include <stdio.h>


int main() {
	
	char a[80];
	int i=0;
	scanf("%c", &a[i]);
	while (a[i] != '\n') {
		scanf("%c", &a[i+1]);
		
		
		i++;	
	}
	
	for (;i>=0;i--){
		printf("%c", a[i]);
	}
	
	return 0;
}
