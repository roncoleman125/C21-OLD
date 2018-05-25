#pragma once
#include "Utils.h"
#include "Card.h"

#define MAX_HAND_CARDS 10

typedef struct {
	Card cards[MAX_HAND_CARDS];
	Int value;
	Int size;
	float bet;
	void* player;
} Hand;

Hand Hand_();
Hand Hand_(void* player);
Hand Hand_(Card* card1, Card* card2);
Int score(Hand* hand);
Card hit(Hand* hand);
void hit(Hand* hand, Card* card);
bool isBroke(Hand* hand);
bool isCharlie(Hand* hand);

bool isBlackjack(Hand* dealer);

/*! \brief Returns true if player has a "natural" blackjack.
*/
bool isBlackjack(void* player, Hand* hand);

bool isPair(Hand* hand);
bool isAcePlusX(Hand* hand);