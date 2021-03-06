﻿#pragma once
// CONTEXT: The sum of the squares of the first ten natural numbers is,
//
// 12+22+...+102=385
// The square of the sum of the first ten natural numbers is,
//
// (1+2+...+10)2=552=3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.
//
// CHALLENGE : Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
class Problem6 {
public:
	explicit Problem6(unsigned long _limit);
private:
	static unsigned long BruteForceSumSquare(unsigned long _limit);
	static unsigned long BruteForceSquareSum(unsigned long _limit);

	static unsigned long ElegantSumSquare(unsigned long _limit);
	unsigned long ElegantSquareSum(unsigned long _limit);
};

