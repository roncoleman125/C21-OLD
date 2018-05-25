#include <assert.h>
#include "../C21/Hand.h"
#include "../C21/Strategy.h"

/* Tests IV: 4,4 v. 4 */
void test03() {
	Hand hand = Hand_();

	Card card1 = Card_(4, DIAMONDS);
	hit(&hand, &card1);

	Card card2 = Card_(4, HEARTS);
	hit(&hand, &card2);

	Card upcard = Card_(4, SPADES);

	Strategy bs = BasicStrategy_();
	Play play = doSection4(&hand, &upcard, &bs);

	assert(play == HIT);
}