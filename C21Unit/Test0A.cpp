#include <assert.h>
#include "../C21/Hand.h"
#include "../C21/Strategy.h"

/* Tests I: 10+3+7 v. 6 */
void test0a() {
	Hand hand = Hand_();

	Card card1 = Card_(10, DIAMONDS);
	hit(&hand, &card1);

	Card card2 = Card_(3, HEARTS);
	hit(&hand, &card2);

	Card card3 = Card_(7, CLUBS);
	hit(&hand, &card3);

	Card upcard = Card_(10, SPADES);

	Strategy bs = BasicStrategy_();
	Play play = doSection1(&hand, &upcard, &bs);

	assert(play == STAY);
}