#include <assert.h>
#include "Card.h"

Card Card_(Rank rank, Suit suit) {
	Card card = { rank, suit };
	return card;
}

Card Card_(Int rank, Suit suit) {
	Card card = { (Rank)rank, suit };
	return card;
}

Card deal() {
	// Get a random suit
	Suit suit = randomSuit();

	// Get a rank
	Rank rank = randomRank();

	// Make a card
	Card card = Card_(rank, suit);
	return card;
}

bool isFace(Card* card) {
	return card->rank == JACK || card->rank == QUEEN || card->rank == KING;
}

bool isAce(Card* card) {
	return card->rank == ACE;
}

bool is10(Card* card) {
	return isFace(card) || card->rank == TEN;
}

Suit randomSuit() {
	Suit suits[] = { HEARTS, SPADES, DIAMONDS, CLUBS };

	Int index = random(0, 3);

	return suits[index];
}

Rank randomRank() {
	// Rank ranks[] = { ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };

	Rank rank = (Rank) random(ACE, KING);
	
	assert(rank >= ACE && rank <= KING);

	//return (Rank) random(ACE, KING);
	return rank;
}