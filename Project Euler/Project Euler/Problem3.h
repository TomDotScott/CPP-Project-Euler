#pragma once
#include <iostream>

// CONTEXT : The prime factors of 13195 are 5, 7, 13 and 29.
// CHALLENGE : What is the largest prime factor of the number 600851475143 ?
class Problem3 {
public:
	explicit Problem3(const unsigned long long int _number) { std::cout << PrimeFactors(_number) << std::endl; };
private:
	static unsigned long long int PrimeFactors(unsigned long long int _number);
};

