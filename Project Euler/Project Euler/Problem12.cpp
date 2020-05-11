#include "Problem12.h"

int Problem12::Solve(const int _divisorAmount) {
	int currentNum{ 2 };
	int currentTriangleNum{ GetTriangleNumber(currentNum) };
	while (!m_divisorPairs[_divisorAmount + 1]) {
		int count{ FindDivisorCount(currentTriangleNum) };
		if (!m_divisorPairs[count]) {
			m_divisorPairs[count] = currentTriangleNum;
			//std::cout << count << " : " << m_divisorPairs[count] << std::endl;
			//if we're over the amount, we've done out job
			if(count > _divisorAmount)
			{
				return m_divisorPairs[count];
			}
		}
		currentNum++;
		currentTriangleNum = GetTriangleNumber(currentNum);

		std::cout << "CURRENT NUMBER : " << currentNum << " CURRENT TRIANGLE NUM : " << currentTriangleNum << " DIVISORS : " << count << std::endl;
	}
	return m_divisorPairs[_divisorAmount];
}

int Problem12::FindDivisorCount(const int _num) const {
	//starts at 1 because 1 is always a divisor
	int divisorCount{ 1 };
	for (int i = 2; i <= _num; ++i) {
		if (_num % i == 0) {
			divisorCount++;
		}
	}
	return divisorCount;
}

int Problem12::GetTriangleNumber(const int _num) {
	return _num * (_num + 1) / 2;
}



