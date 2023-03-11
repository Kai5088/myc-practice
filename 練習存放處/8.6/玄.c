#include <stdio.h>

#include <stdbool.h>

#define NUM_SUITS 4
#define NUM_RANKS 13


int main(void) {
	bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
	int num_cards, rank, suit, suitInput, rankInput;
	const char rank_code[]={'2','3','4','5','6','7','8','9','t','j','q','k','a'};
	const char suit_code[]={'c','d','h','s'};
	const int mySuit[]={0,2,1,2,2,0,1,1,3,3,2,0,1,2,3,2,0,1,3,0};
	const int myRank[]={3,1,10,1,5,4,6,2,12,0,11,1,5,7,0,12,2,8,5,10};

	scanf("%d",&num_cards);
	scanf("%d",&suitInput);
	scanf("%d",&rankInput);

	for(; num_cards>1; suitInput++, rankInput++){
		suit = mySuit[suitInput];
		rank = myRank[rankInput];
		 
			
			num_cards--;
			printf("%c%c ",rank_code[rank], suit_code[suit]);
		}
		
	
	suit = mySuit[suitInput];
	rank = myRank[rankInput];
	printf("%c%c",rank_code[rank], suit_code[suit]);
	return 0;
}
