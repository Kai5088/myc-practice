#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int a;

void in(void);
void ch(void);
void re(void);


int main(void) {
	char d;
	printf("Guess the secret number between 1 and 100\n\n");
	in();
	do {
		ch();
		printf("A new number has been chosen.\n");
		re();
		printf("Play again? (Y/N) ");
		scanf(" %c", &d);
	} while(d=='y'||d=='Y');
	
	return 0;
}

void in(void){
	srand((unsigned) time(NULL));
}

void ch(void){
	a=rand() % 100+1;
}

void re(void){
	int g, ng=0;
	
	for(;;){
	ng++;	
	printf("Enter guess: ");
	scanf("%d", &g);		
		if(g==a){
			printf("You won in %d guesses!\n\n", ng);
			return;
		}
		else if (g<a){
			printf("Too low try again.\n");
		}
		else {
			printf("Too high try again.\n");
		}
	}
}






