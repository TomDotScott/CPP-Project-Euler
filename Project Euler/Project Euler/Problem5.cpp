#include "Problem5.h"

#include <iostream>

Problem5::Problem5(const int _number)
{
	//all we need to do is find the lowest common multiple for the numbers 1 to 20
	//LCM is defined as  (a * b) / GCD(a, b)
	int result{ 1 };
	for(int i = 2; i < _number; ++i)
	{
		result = LowestCommonMultiple(result, i);
	}
	std::cout << result;
}

int Problem5::LowestCommonMultiple(const int _num1, const int _num2)
{
	return _num1 * (_num2 / GreatestCommonDenominator(_num1, _num2));
}

int Problem5::GreatestCommonDenominator(const int _num1, const int _num2)
{
	if (_num2 == 0) {
		return _num1;
	}else
	{
		return GreatestCommonDenominator(_num2, _num1 % _num2);
	}
}
