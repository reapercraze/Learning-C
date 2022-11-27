
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main()
{
	int in_hand[NUM_SUITS][NUM_RANKS] = {0};
	int num_cards, suit, rank;
	
	const char suit_code[NUM_SUITS] = {'c', 'd', 'h', 's'};
	const char rank_code[NUM_RANKS] = {'2', '3', '4', '5', '6', '7', 
									'8', '9', 'T', 'J', 'Q', 'K', 'A'};
	
	srand(time(NULL));
	
	printf("How many cards?");
	scanf("%d", num_cards);
	
	while (num_cards > 0)
	{
		suit = rand() % NUM_SUITS;
		rank = rand() % NUM_RANKS;
		
		if (in_hand[suit][rank] == 0)
		{
			in_hand[suit][rank] = 1;
			printf("%c%c ", rank_code[rank], suit_code[suit]);
			num_cards--;
		}
	}
	
}