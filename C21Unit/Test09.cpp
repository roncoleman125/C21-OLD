#include <assert.h>
#include "../C21/Hand.h"
#include "../C21/Strategy.h"

/* Tests I: 10+A v. 10 */
void test09() {
	Hand hand = Hand_();

	Card card1 = Card_(10, DIAMONDS);
	hit(&hand, &card1);

	Card card2 = Card_(ACE, HEARTS);
	hit(&hand, &card2);

	Card upcard = Card_(10, SPADES);

	Strategy bs = BasicStrategy_();
	Play play = doSection1(&hand, &upcard, &bs);

	assert(play == STAY);
}