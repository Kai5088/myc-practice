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
	while(a[i]!='\n'){
	
	putchar (toupper(a[i]));i++;
	}
	{
	while(a[i]!='\n')
	putchar(tolower(a[i]));i++;
}
	return 0;
}
