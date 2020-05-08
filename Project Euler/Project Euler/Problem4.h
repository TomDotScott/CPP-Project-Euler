#pragma once
#include <iostream>

// CONTEXT : A palindromic number reads the same both ways. The largest palindrome made from the
// product of two 2-digit numbers is:
//				9009 = 91 × 99.
// CHALLENGE : Find the largest palindrome made from the product of two 3-digit numbers.
class Problem4 {
public:
	Problem4() { std::cout << FindLargestPalindromeBruteForce() << std::endl; };
private:
	bool BruteForceIsPalindrome(int _number) const;
	int FindLargestPalindromeBruteForce() const;
};

