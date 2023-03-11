#include <stdio.h>
#include <stdlib.h>

void in(void);
void re(void);
void gu(void);

int a;

int main() {
	char d; 
	printf("Guess the secret number between 1 and 100\n\n");
	in();
	do{
	re();
	printf("A new number has been chosen.\n");
	gu();
	printf("Play again? (Y/N) ");
		scanf(" %c", &d);
	
}while(d=='y'||d=='Y');
	return 0;
}

void in(void){
	srand(time(NULL));
}

void re(void){
	a=rand()%100+1; 
}

void gu(void){
	int g,ng=0;
	
	while(1){
		ng++;
		printf("Enter guess: ");
		scanf("%d", &g);
		
		if(g==a){
			printf("You won in %d guesses!\n\n", ng);
			return;
		}
		else if (g<a){
			printf("Too low!\n\n");
		}
		else if (g>a){
			printf("Too high!\n\n");
		}
	}
}

