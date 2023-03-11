#include <stdio.h>


int main() {
	char a[100],b[100];
	int i=0,j=0,sum=0,k=0;
	printf("Enter first word: \n");
	while (1){
		scanf("%c", &a[i]);
		if(a[i]=='\n'){
			break;
		}
	i++;
	}
	printf("Enter second word: \n");
	while (1){
		scanf("%c", &b[j]);
		if(b[j]=='\n'){
			break;
		}
	j++;
	}
	while (a[k]!='\n'){
		sum+=a[k]-b[k];
		k++;
	}
	if(sum==0){
		printf("The words are anagrams.");
	}
	else {
		printf("The words are not anagrams.");
	}
	return 0;
}
