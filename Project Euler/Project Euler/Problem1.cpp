#include "Problem1.h"

int Problem1::ThreeOrFiveBelowBruteForce() const
{
	int total{ 0 };
	//Brute force solution
	for (int i = 0; i < m_limit + 1; ++i)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}
	}
	return total;
}
