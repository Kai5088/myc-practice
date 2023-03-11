#include <stdio.h>


int main() {
	char a;
	int SUM=0;
	printf("Enter a sentence: ");
	scanf("%c", &a);
	while (a != '\n') {
	if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
		SUM=SUM+1;
		scanf("%c", &a);
		
	}
	else {
		scanf("%c", &a);
		
	} 
	
}
	printf("Your sentence contains %d vowels.",  SUM);
	return 0;
}
