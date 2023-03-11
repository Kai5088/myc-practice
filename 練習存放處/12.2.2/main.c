#include <stdio.h>


int main() {
	char a[100],b[100];
	int i=0,j,sum=0;
	scanf("%c", &a[0]);
	while(a[i]!='\n'){
	if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
	i++;
	scanf("%c", &a[i]);
}
	else{
		scanf("%c", &a[i]);
	}
}
	
	int s=0,e=i-1;
	while(e>s){
		if(a[s]!=a[e]){
		sum++;}
		e--;s++;
	}
	
	
	
	if(sum==0){
		printf("palindrome");
	}
	else{
		printf("not a palindrome");
	}
	return 0;
}
