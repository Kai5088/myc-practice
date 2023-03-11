#include <stdio.h>


int main() {
	printf("Enter message to be encrypted:\n");
	char a[80];
	int i=0,n;
	while (1) {
		scanf("%c", &a[i]);
		
		
		if (a[i] == '\n'){ 
			break;
		}
		i++; 
			
	}
	printf("Enter shift amount (1-25):\n");
	scanf("%d", &n);
	printf("Encrypted message: ");
	i=0;

	
	while (a[i]!= '\n'){
		
	if (a[i] >= 'A'&&a[i]<='Z' ) {
		a[i] = (a[i] + n-'A') % 26 + 'A';
	}
	else if (a[i] >= 'a'&&a[i] <= 'z') {
		a[i] = (a[i] + n - 'a') % 26 + 'a';
	}


	printf("%c", a[i]);
		i++;
	}
	
	return 0;
}

