#pragma once
#include <iostream>

#include "Problem7.h"
// CONTEXT : The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17
//
// CHALLENGE : Find the sum of all the primes below two million
class Problem10 {
public:
	Problem10() {
		m_sieveOfEratosthenes = new Problem7(1);
		m_primes = m_sieveOfEratosthenes->GetPrimesVector();
		long long total{ 0 };
		for (auto prime : m_primes) {
			total += prime;
		}
		std::cout << "TOTAL :" << total;
	}
private:
	Problem7* m_sieveOfEratosthenes;
	std::vector<int> m_primes;
};