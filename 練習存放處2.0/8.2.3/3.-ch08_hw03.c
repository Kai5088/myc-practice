#include <stdio.h>

#define TERMINUS (c = getchar()) != '\n' && c != '.' && c != '?' && c != '!'

int main(void)
{
	char sentence[200], c;
	int pos = 0,i = 0;

//	printf("Enter a sentence: ");
	for (i = 0; TERMINUS; i++) {
		sentence[i] = c;
		pos = i;
	}

//	printf("Reversal of sentence: ");
	for (i = pos; i >= 0; i--) {
		int j;
		if (sentence[i] == ' ') {
			for (j = i + 1; sentence[j] != ' ' && j <= pos; j++) {
				printf("%c", sentence[j]);
			}
			printf(" ");
		} else if (i == 0) {
			for (j = i; sentence[j] != ' ' && j <= pos; j++) {
				printf("%c", sentence[j]);
			}
		}
	}

	printf("%c", c);

	return 0;
}

