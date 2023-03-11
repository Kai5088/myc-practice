#include <stdio.h>
#include <stdlib.h>

int re(char a[]);
int com(char a[],int n);

int main() {
	char f[100];
	int a,e;
	a=re(f);
	e=com(f,a);
	if(e==0){
		printf("palindrome");
	}
	else{
		printf("Not a palindrome");
	}
	return 0;
}

int re(char a[]){
	
	int i=0;
	scanf("%c", &a[i]);
	for (i=0;a[i]!='\n';){
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
			i++;
			scanf("%c", &a[i]);
		}
		else{
			scanf("%c", &a[i]);
		}
	}
	return i;	
}

int com(char a[],int n){
	int sum=0;
	char *s=a,*e=a+n-1;
	while(e>s){
		if(*s!=*e){
		
			sum++;
		}
		*e--;*s++;
	}
	
	return sum;
	
}

