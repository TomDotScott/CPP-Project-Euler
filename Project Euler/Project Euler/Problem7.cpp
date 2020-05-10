#include "Problem7.h"

#include <array>
#include <iostream>
#include <vector>

Problem7::Problem7(const unsigned long _primePosition) {
	SieveOfEratosthenes(m_primes);
	std::cout << m_primes[_primePosition];
}

void Problem7::SieveOfEratosthenes(std::vector<int>& _primesVector) {
	//initialise with an array of boolean values set to true
	//bool isPrime[k_max];
	//memset fills a memory block with the value declared
	//more efficient than for loop
	//memset(isPrime, true, sizeof(isPrime));
	
	auto* isPrime = new std::array<bool, k_max>;
	isPrime->fill(true);
	for (int i = 2; i * i < k_max; ++i) {
		if (isPrime->at(i)) {
			for (unsigned long j = i * i; j < k_max; j += i) {
				isPrime->at(j) = false;
			}
		}
	}
	//store the primes
	for (int prime = 2; prime < k_max; ++prime) {
		if (isPrime->at(prime)) {
			_primesVector.push_back(prime);
		}
	}
	delete isPrime;
}
