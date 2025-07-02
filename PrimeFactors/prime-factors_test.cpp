#include "gmock/gmock.h"
#include "prime-factors.cpp"

//[feature] page 번호
// [refactoring] page 번호

TEST(PrimeFactors, Of1) {
	PrimeFactors prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}