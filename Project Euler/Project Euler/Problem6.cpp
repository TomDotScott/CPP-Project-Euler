#include "Problem6.h"

#include <iostream>

Problem6::Problem6(const unsigned long _limit) {
	const unsigned long sum{ ElegantSumSquare(_limit) };
	const unsigned long square{ ElegantSquareSum(_limit) };
	const unsigned long result{ square - sum };
	std::cout << "Sum of the Squares of the first " << _limit << " natural numbers: " << sum << std::endl;
	std::cout << "Square of the Sum of the first " << _limit << " natural numbers: " << square << std::endl;
	std::cout << "Difference: " << result << std::endl;
}

unsigned long Problem6::BruteForceSumSquare(unsigned long _limit) {
	unsigned long total{ 0 };
	for (unsigned long i = 0; i <= _limit; ++i) {
		total += i * i;
	}
	return total;
}

unsigned long Problem6::BruteForceSquareSum(unsigned long _limit) {
	const unsigned long sum = (_limit * (_limit + 1)) / 2;
	return sum * sum;
}

unsigned long Problem6::ElegantSumSquare(unsigned long _limit) {
	//formula: x(x + 1)(2x + 1)
	//        -----------------
	//				  6
	return ((2 * (_limit * _limit * _limit)) + (3 * (_limit * _limit)) + _limit) / 6;
}

unsigned long Problem6::ElegantSquareSum(unsigned long _limit) {
	//formula: x(x + 1)
	//        ----------
	//            2
	return (((_limit * _limit) + _limit) / 2) * (((_limit * _limit) + _limit) / 2);
}
