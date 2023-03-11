#include <stdio.h>


int main() {
	char a[100];
	int i=0;
	printf("Enter message: \n");
	scanf("%c", &a[i]);
	while(a[i]!='\n'){
	i++;
	scanf("%c", &a[i]);
}
	i=0;
	printf("In B1FF-speak: ");
	while(a[i]!='\n'){
		if (a[i]=='A'||a[i]=='a'){
			printf("4");i++;
		}
		else if(a[i]=='b'||a[i]=='B'){
			printf("8");i++;
		}
		else if(a[i]=='E'||a[i]=='e'){
			printf("3");i++;
		}
		else if(a[i]=='i'||a[i]=='I'){
			printf("1");i++;
		}
		else if(a[i]=='O'||a[i]=='o'){
			printf("0");i++;
		}
		else if(a[i]=='s'||a[i]=='S'){
			printf("5");i++;
		}
		
		else{
			putchar (toupper(a[i]));i++;
		}
		
	}
	printf("!!!!!!!!!!");
	return 0;
}
