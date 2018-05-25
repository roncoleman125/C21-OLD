#include <assert.h>
#include "../C21/Hand.h"
#include "../C21/Strategy.h"

/* Tests II: 3+2 v. 6 */
void test08() {
	Hand hand = Hand_();

	Card card1 = Card_(3, DIAMONDS);
	hit(&hand, &card1);

	Card card2 = Card_(2, HEARTS);
	hit(&hand, &card2);

	Card upcard = Card_(6, SPADES);

	Strategy bs = BasicStrategy_();
	Play play = doSection2(&hand, &upcard, &bs);

	assert(play == HIT);
}