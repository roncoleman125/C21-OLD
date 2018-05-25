#pragma once
#include "Utils.h"

typedef enum { NO_SUIT = 0, HEARTS = 'H', SPADES = 'S', DIAMONDS = 'D', CLUBS = 'C' } Suit;
//typedef enum { NO_RANK, ACE = 1, JACK = 11, QUEEN = 12, KING = 13 } Face;
typedef enum { NO_RANK=0, ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING } Rank;

#define ACE_AS_11 10

//#define isAce(rank) (rank == ACE)
//#define isFace(card) (card.rank == JACK || card.rank == QUEEN || card.rank == KING)
//#define is10(card) (card.rank == 10)

typedef struct {
	Rank rank;
	Suit suit;
} Card;

Card Card_(Rank rank, Suit suit);
Card Card_(Int rank, Suit suit);
bool isFace(Card* card);
bool isAce(Card* card);
bool is10(Card* card);
Card deal();
Suit randomSuit();
Rank randomRank();
//#define randomRank() (random(1, 13))