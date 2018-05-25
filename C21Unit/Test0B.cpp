#include <assert.h>
#include "../C21/Hand.h"
#include "../C21/Strategy.h"

/* Tests I: 3+3+7 v. 8 */
void test0b() {
	Hand hand = Hand_();

	Card card1 = Card_(7, DIAMONDS);
	hit(&hand, &card1);

	Card card2 = Card_(3, HEARTS);
	hit(&hand, &card2);

	Card card3 = Card_(3, CLUBS);
	hit(&hand, &card3);

	Card upcard = Card_(8, SPADES);

	Strategy bs = BasicStrategy_();
	Play play = doSection1(&hand, &upcard, &bs);

	assert(play == HIT);
}