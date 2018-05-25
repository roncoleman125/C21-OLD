#pragma once
#include "Utils.h"
#include "Hand.h"
#include "Strategy.h"

#define MAX_YOUR_HANDS 4

/*! @brief Represents the player with all its hands.
*/
typedef struct {
	Hand hands[MAX_YOUR_HANDS];
	Int size;
	Strategy* strategy;
	float pl;
} Player;

Player Player_(Strategy* strategy);

/*! \brief Initializes a player. */
void init(Player* player);

Int add(Player* player, Hand* hand);
Card hit(Player* player);
Card hit(Player* player, Int handno);