#include <assert.h>
#include "../C21/Hand.h"
#include "../C21/Strategy.h"

/* Tests II: 6+5 v. 7 */
void test07() {
	Hand hand = Hand_();

	Card card1 = Card_(6, DIAMONDS);
	hit(&hand, &card1);

	Card card2 = Card_(5, HEARTS);
	hit(&hand, &card2);

	Card upcard = Card_(7, SPADES);

	Strategy bs = BasicStrategy_();
	Play play = doSection2(&hand, &upcard, &bs);

	assert(play == DOUBLE_DOWN);
}