#include <assert.h>
#include "../C21/Hand.h"
#include "../C21/Strategy.h"

/* Tests III: A,10 v. 7 */
void test04() {
	Hand hand = Hand_();

	Card card1 = Card_(ACE, DIAMONDS);
	hit(&hand, &card1);

	Card card2 = Card_(10, HEARTS);
	hit(&hand, &card2);

	Card upcard = Card_(7, SPADES);

	Strategy bs = BasicStrategy_();
	Play play = doSection3(&hand, &upcard, &bs);

	assert(play == STAY);
}