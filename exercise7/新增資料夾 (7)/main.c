#include <stdio.h>

int main() {
	float i=1,b=0;
	char a;
	printf("Enter a sentence: ");
	scanf("%c", &a);
	while (a!='\n'){
	if (a!=' '){
		b++;
		scanf("%c", &a);
	}
	else {
		i++;
		scanf("%c", &a);
}
}
	printf("Characters: %.0f\n", b);
	printf("Words: %.0f\n", i);
	b/=i;
	printf("Average word length: %.1f", b);
	return 0;
}
