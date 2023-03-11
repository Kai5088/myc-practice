#include <stdio.h>
#include <stdlib.h>



int main() {
	char a[100];
	int i=0,n;
	
	while(1){
		scanf("%c", &a[i]);
		if(a[i]=='\n'){
			break;
		}
		i++;
	}
	i=0;
	scanf("%d", &n);
	while(1){
	
	if(a[i]>='A'&&a[i]<='Z'){
		printf("%c", (a[i] + n-'A') % 26 + 'A'); 
	}
	else if(a[i]>='a'&&a[i]<='z'){
		printf("%c", (a[i] + n - 'a') % 26 + 'a'); 
	}
	else{
		printf("%c",a[i]);
	}
	i++;
	if(a[i]=='\n'){
		break;
	}
}
	return 0;
}
