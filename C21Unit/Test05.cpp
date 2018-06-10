#include <assert.h>
#include "../C21/Hand.h"
#include "../C21/Strategy.h"

/* Tests III: A,7 v. 6 */
void test05() {
	Hand hand = Hand_();

	Card card1 = Card_(ACE, DIAMONDS);
	hit(&hand, &card1);

	Card card2 = Card_(SEVEN, HEARTS);
	hit(&hand, &card2);

	Card upcard = Card_(SIX, SPADES);

	Strategy bs = BasicStrategy_();
	Play play = doSection3(&hand, &upcard, &bs);

	assert(play == DOUBLE_DOWN);
}