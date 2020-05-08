#include "Problem2.h"

unsigned long Problem2::EvenFibBruteForce() const
{
	unsigned long int total{ 0 };
	unsigned long int previousTerm{ 0 };
	unsigned long int currentTerm{ 1 };
	while (currentTerm < static_cast<unsigned long>(m_limit)) {
		const unsigned long int newTerm{ currentTerm + previousTerm };
		previousTerm = currentTerm;
		currentTerm = newTerm;
		if(currentTerm % 2 == 0)
		{
			total += currentTerm;
		}
	}
	return total;
}
