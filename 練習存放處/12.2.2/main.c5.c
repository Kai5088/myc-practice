#include <stdio.h>
#include <stdlib.h>

int re(char a[]);
int count(char a[],int n);

int main() {
	char f[100];
	int e,pass;
	pass=re(f);
	e=count(f, pass);
	if(e==0){
		printf("palindrome");
	}
	else {
		printf("not a palindrome");
	}
	return 0;
}

int re(char a[]){
	int i=0;
	scanf("%c", &a[i]);
	for(i=0;a[i]!='\n';){
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
		i++;
		scanf("%c", &a[i]);}
		else{
		scanf("%c", &a[i]);	
		}
	}
	return i;
} 

int count(char a[],int n){
	int sum=0,e,s=0;
	e=n-1;
	while(e>s){
	
	if(a[e]!=a[s]){
		sum++;
	}
	e--;s++;
}
	return sum;
	
}
