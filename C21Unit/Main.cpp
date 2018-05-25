#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../C21/Strategy.h"

Play doSection4(Hand* hand, Card* upcard, Strategy* strategy);
Play doSection3(Hand* hand, Card* upcard, Strategy* strategy);
Play doSection2(Hand* hand, Card* upcard, Strategy* strategy);
Play doSection1(Hand* hand, Card* upcard, Strategy* strategy);


void test00();
void test01();
void test02();
void test03();
void test04();
void test05();
void test06();
void test07();
void test08();
void test09();
void test0a();
void test0b();
void test0c();
void test0d();
void test0e();
void test0f();
void test10();
void test11();

int main(int argc, char** argv) {
	void(*tests[])(void) = {
		/*
		test00,
		test01,
		test02,
		test03,
		test04,
		test05,
		test06,
		test07,
		test08,
		test09,
		test0a,
		test0b,
		test0c,

		test0d,
		test0e,
		test0f,
		*/

		test10,

		/*
		test11
		*/
	};

	/*
	(*tests[0])();
	void(*f)(void) = tests[0];
	(*f)();
	*/

	int n = sizeof(tests) / sizeof(void*);

	printf("running tests: %d\n", n);
	for (int k = 0; k < n; k++) {
		printf("test %02x: \n", k);
		(*tests[k])();
		printf(" PASSED!\n");
	}
}