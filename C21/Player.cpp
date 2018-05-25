#include <assert.h>
#include "Player.h"

Player Player_(Strategy* strategy) {
	// TODO: the player's hand is not pointing back to the player
	Player player = { { Hand_() }, 1, strategy, 0.0 };

	return player;
}


void init(Player* player) {
	assert(player->size >= 1);

	player->hands[0].player = player;
}

Int add(Player* player, Hand* hand) {
	assert(player->size < MAX_YOUR_HANDS);

	Int index = player->size++;

	hand->player = player;

	player->hands[index] = *hand;

	return index;
}