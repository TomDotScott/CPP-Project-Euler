#include "Problem2.h"

int Problem2::EvenFibBruteForce() const
{
	int total{ 0 };
	int previousTerm{ 0 };
	int currentTerm{ 1 };
	while (currentTerm < m_limit) {
		const int newTerm{ currentTerm + previousTerm };
		previousTerm = currentTerm;
		currentTerm = newTerm;
		if(currentTerm % 2 == 0)
		{
			total += currentTerm;
		}
	}
	return total;
}
