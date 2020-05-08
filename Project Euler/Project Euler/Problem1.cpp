#include "Problem1.h"

int Problem1::Sum(int _limit)
{
	return _limit * (_limit + 1) / 2;
}

int Problem1::ThreeOrFiveBelowBruteForce() const
{
	int total{ 0 };
	//Brute force solution
	for (int i = 0; i < m_limit; ++i)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}
	}
	return total;
}

int Problem1::ThreeOrFiveBelowElegant() const
{
	const int sumThree{ 3 * Sum(m_limit / 3) };
	const int sumFive{ 5 * Sum(m_limit / 5) };
	const int sumFifteen{ 15 * Sum(m_limit / 15) };
	return (sumThree + sumFive - sumFifteen) - m_limit;	
}
