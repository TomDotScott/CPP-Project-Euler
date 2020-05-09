#pragma once
#include <iosfwd>
#include <vector>

constexpr auto k_max = 1000000;

// CONTEXT :  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
// CHALLENGE : What is the 10 001st prime number?
class Problem7 {
public:
	explicit Problem7(unsigned long _primePosition);
private:
	static void SieveOfEratosthenes(std::vector<int>& _primesVector);
	std::vector<int> m_primes;
};

