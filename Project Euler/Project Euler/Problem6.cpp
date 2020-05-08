#include "Problem6.h"

#include <iostream>

Problem6::Problem6(unsigned long _limit)
{
	const unsigned long sum{ SumSquare(_limit) };
	const unsigned long square{ SquareSum(_limit) };
	const unsigned long result{ square - sum };
	std::cout << "Sum of the Squares of the first " << _limit << " natural numbers: " << sum << std::endl;
	std::cout << "Square of the Sum of the first " << _limit << " natural numbers: " << square << std::endl;
	std::cout << "Difference: " << result << std::endl;
}

unsigned long Problem6::SumSquare(unsigned long _limit)
{
	unsigned long total{ 0 };
	for(unsigned long i = 0; i <= _limit; ++i)
	{
		total += i * i;
	}
	return total;
}

unsigned long Problem6::SquareSum(unsigned long _limit)
{
	const unsigned long sum = (_limit * (_limit + 1)) / 2;
	return sum * sum;
}
