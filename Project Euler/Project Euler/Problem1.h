#pragma once
#include <iostream>

// CONTEXT : If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// CHALLENGE: Find the sum of all the multiples of 3 or 5 below 1000.
class Problem1 {
public:
	explicit Problem1(const int _limit) : m_limit(_limit)
	{
		std::cout << ThreeOrFiveBelowElegant() << std::endl;
	};
private:
	static int Sum(int _limit);
	int ThreeOrFiveBelowBruteForce() const;
	int ThreeOrFiveBelowElegant() const;
	int m_limit;
};

