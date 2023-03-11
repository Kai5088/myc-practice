#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define NUM_SUITS 4
#define NUM_RANKS 13


int main(void) {
	bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
	int num_cards, rank, suit,i,j;
	const char rank_code[]={'2','3','4','5','6','7','8','9','t','j','q','k','a'};
	const char suit_code[]={'c','d','h','s'};
	const char mysuit[]={0,2,1,2,2,0,1,1,3,3,2,0,1,2,3,2,0,1,3,0};
	const char myrank[]={3,1,10,1,5,4,6,2,12,0,11,1,5,7,0,12,2,8,5,10};
	srand((unsigned) time(NULL));
	
	scanf("%d",&num_cards);
	scanf("%d",&i);
	scanf("%d",&j);
	while (num_cards>0) {
		suit= mysuit[i]%NUM_SUITS;
		rank= myrank[j]%NUM_RANKS;
		if(!in_hand[suit][rank]) {
			in_hand[suit][rank]=true;
			num_cards--;
			printf(" %c%c", suit_code[suit],rank_code[rank]);
		}
	}
	printf("\n");
	return 0;
}

