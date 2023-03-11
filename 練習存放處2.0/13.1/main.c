#include <stdio.h>


int main() {
	char a[80];
	int i=0;
	scanf("%c", &a[i]);
		while (a[i]!='\n'){
			i++;
			scanf("%c", &a[i]);
		}
	i=0;
	while (1){
		if(a[i]=='\n') {
			break;
		}
		if(a[i]>=97&&a[i]<=122){
		printf("%c", a[i]-32);
	}
		
		else {
			printf("%c", a[i]);
		}
		
		i++;
		
		
		
	} 
	printf("\n");
	i=0;
	while (1){
		if(a[i]=='\n') {
			break;
		}
		if(a[i]>=65&&a[i]<=90){
		printf("%c", a[i]+32);
	}
		
		else {
			printf("%c", a[i]);
		}
		
		i++;
		
		
	} 
	
	return 0;
}
